#include <iostream>
#include "Vector2D.h"

int main() {
    Vector2D v1(3.0, 4.0);
    Vector2D v2(5.0, -2.0);

    std::cout << "--- Vectores Iniciales ---" << std::endl;
    std::cout << "Vector v1: ";
    v1.mostrar(); // 2. Probando la función const 'mostrar'
    std::cout << "Vector v2: ";
    v2.mostrar();
    std::cout << "--------------------------\n" << std::endl;

    // 1. Probando la función inline 'magnitud'
    std::cout << "--- 1. Magnitud (inline) ---" << std::endl;
    std::cout << "La magnitud de v1 es: " << v1.magnitud() << std::endl;
    std::cout << "----------------------------\n" << std::endl;

    // 3. Probando la función friend 'productoPunto'
    std::cout << "--- 3. Producto Punto (friend) ---" << std::endl;
    double p_punto = productoPunto(v1, v2);
    std::cout << "El producto punto entre v1 y v2 es: " << p_punto << std::endl; // (3*5 + 4*-2) = 15 - 8 = 7
    std::cout << "----------------------------------\n" << std::endl;

    // 4. Probando la sobrecarga del operador '+'
    std::cout << "--- 4. Suma de Vectores (+) ---" << std::endl;
    Vector2D v_suma = v1 + v2; // (3+5, 4-2) = (8, 2)
    std::cout << "La suma de v1 + v2 es: ";
    v_suma.mostrar();
    std::cout << "-------------------------------\n" << std::endl;
    
    // 5. Probando la lambda para el umbral de magnitud
    std::cout << "--- 5. Lambda para umbral ---" << std::endl;
    double umbral = 6.0;

    // La lambda debe capturar el 'v_suma' y 'umbral' por valor
    // Devuelve 'true' si la magnitud del vector supera el umbral
    auto superaUmbral = [](const Vector2D& vec, double threshold) -> bool {
        return vec.magnitud() > threshold;
    };

    // Aquí verifica el vector suma
    bool resultado = superaUmbral(v_suma, umbral);
    std::cout << "La magnitud del vector suma (" << v_suma.magnitud() << ") supera el umbral " << umbral << "? ";
    std::cout << (resultado ? "Si" : "No") << std::endl;

    // Y también verificamos el vector v1 con otro umbral
    umbral = 4.5;
    resultado = superaUmbral(v1, umbral);
    std::cout << "La magnitud del vector v1 (" << v1.magnitud() << ") supera el umbral " << umbral << "? ";
    std::cout << (resultado ? "Si" : "No") << std::endl;
    std::cout << "-----------------------------\n" << std::endl;

    return 0;
}