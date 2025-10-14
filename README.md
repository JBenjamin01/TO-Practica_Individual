# Implementación de la Clase Vector2D en C++

Este proyecto presenta la implementación de una clase `Vector2D` en C++, diseñada para demostrar conceptos clave de la Programación Orientada a Objetos y características modernas del lenguaje.

---

## Información del Proyecto

|                 |                                                      |
| --------------- | ---------------------------------------------------- |
| **Universidad** | UNIVERSIDAD NACIONAL DE SAN AGUSTÍN                  |
| **Facultad** | FACULTAD DE INGENIERÍA DE PROCESOS Y SERVICIOS       |
| **Escuela** | ESCUELA PROFESIONAL DE INGENIERÍA DE SISTEMAS        |
| **Curso** | Tecnología de Objetos - Grupo C                      |
| **Docente** | Mg. Maribel Molina Barriga                           |
| **Alumno** | Mamani Céspedes, Jhonatan Benjamin                   |
| **Año** | 2025                                                 |

---

## Consigna del Trabajo

El objetivo principal fue crear una clase `Vector2D` con atributos `x` e `y` que cumpliera con los siguientes requisitos de implementación:

1.  **Función `inline`** para calcular la magnitud del vector.
2.  **Función `const`** para mostrar las coordenadas del vector sin modificarlo.
3.  **Función `friend`** para calcular el producto punto entre dos vectores.
4.  **Sobrecarga del operador `+`** para sumar dos objetos `Vector2D`.
5.  **Una expresión `lambda`** para determinar si la magnitud de un vector supera un umbral específico.

---

## Características Implementadas

El proyecto demuestra el uso de varias características importantes de C++:

* **Clase `Vector2D`**: Encapsula los datos (`x`, `y`) y las operaciones relacionadas con un vector en dos dimensiones.
* **Función `inline`**: La función `magnitud()` se declaró `inline` para optimizar su rendimiento. Al ser una función pequeña, el compilador puede insertarla directamente en el código que la llama, evitando la sobrecarga de una llamada a función.
* **Método `const`**: La función `mostrar()` es `const` para garantizar que no alterará el estado del objeto. Esto permite que sea llamada por objetos `Vector2D` constantes y mejora la seguridad del código.
* **Función `friend`**: La función `productoPunto()` se declaró como amiga (`friend`) de la clase `Vector2D`. Esto le permite acceder a los miembros privados (`x`, `y`) de los objetos `Vector2D` que recibe como parámetros, sin ser un método de la clase.
* **Sobrecarga de Operadores**: Se sobrecargó el operador `+` para permitir una sintaxis más intuitiva y natural al sumar vectores (ej. `v3 = v1 + v2;`).
* **Expresión Lambda**: Se utilizó una función anónima (lambda) para encapsular una lógica simple y específica: verificar si la magnitud de un vector excede un valor umbral. Esto demuestra una característica poderosa y moderna de C++ para crear funciones al vuelo.

---

## Estructura del Proyecto

El código está organizado en una estructura modular para facilitar su mantenimiento y lectura:

/
├── Vector2D.h       # Archivo de cabecera con la definición de la clase
├── Vector2D.cpp     # Archivo de implementación de los métodos
└── main.cpp         # Programa principal para probar la clase


---

## Cómo Compilar y Ejecutar

Para compilar el proyecto, se debe asegurar en tener un compilador de C++ (como g++) que soporte el estándar C++17.

1.  **Abrir una terminal** en el directorio raíz del proyecto.
2.  **Ejecutar el siguiente comando** para compilar todos los archivos fuente y generar el ejecutable:

    ```bash
    g++ -std=c++17 -Iinclude main.cpp src/Vector2D.cpp -o VECTOR
    ```
    * `-std=c++17`: Especifica el uso del estándar de C++17.
    * `-Iinclude`: Le indica al compilador que busque los archivos de cabecera en la carpeta `include`.
    * `main.cpp src/Vector2D.cpp`: Los archivos fuente a compilar.
    * `-o VECTOR`: Nombra el archivo ejecutable de salida como `VECTOR`.

3.  **Para ejecutar el programa**, se usa el siguiente comando:

    ```bash
    # En Windows (PowerShell/CMD)
    ./VECTOR.exe

    # En Linux o macOS
    ./VECTOR
    ```

### Salida de Ejemplo

Al ejecutar el programa, se debería ver la siguiente salida en la consola:

```
--- Vectores Iniciales ---
Vector v1: (3, 4)
Vector v2: (5, -2)
--------------------------

--- 1. Magnitud (inline) ---
La magnitud de v1 es: 5
----------------------------

--- 3. Producto Punto (friend) ---
El producto punto entre v1 y v2 es: 7
----------------------------------

--- 4. Suma de Vectores (+) ---
La suma de v1 + v2 es: (8, 2)
-------------------------------

--- 5. Lambda para umbral ---
La magnitud del vector suma (8.24621) supera el umbral 6? Sí
La magnitud del vector v1 (5) supera el umbral 4.5? Sí
-----------------------------
```