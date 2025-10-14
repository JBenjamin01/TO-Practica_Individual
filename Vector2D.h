#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <cmath>

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D(double x_val = 0.0, double y_val = 0.0);

    // --- Funciones solicitadas ---

    // 1. Esta viene a ser la función inline para calcular la magnitud
    // Lo defino aquí mismo para que el compilador la inserte directamente
    inline double magnitud() const {
        return std::sqrt(x * x + y * y);
    }

    // 2. La función const para mostrar el vector
    // Se declara 'const' porque no modifica los atributos del objeto
    void mostrar() const;

    // 4. Sobrecarga del operador de suma (+)
    Vector2D operator+(const Vector2D& otro) const;

    // 3. Por último, la declaración de la función 'friend' para el producto punto
    // Esto básicamente permite a esta función externa acceder a los miembros privados 'x' e 'y'
    friend double productoPunto(const Vector2D& v1, const Vector2D& v2);
};

#endif