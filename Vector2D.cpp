#include "Vector2D.h"

Vector2D::Vector2D(double x_val, double y_val) : x(x_val), y(y_val) {}

// Implementación de la función const para mostrar
void Vector2D::mostrar() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

// Implementación de la sobrecarga del operador +
Vector2D Vector2D::operator+(const Vector2D& otro) const {
    // En esta parte se crea y devuelve un nuevo vector que es la suma de este y el 'otro'
    return Vector2D(this->x + otro.x, this->y + otro.y);
}

// Implementación de la función friend para el producto punto
double productoPunto(const Vector2D& v1, const Vector2D& v2) {
    // Se puede acceder a los miembros privados de v1 y v2 gracias a que es 'friend'
    return (v1.x * v2.x) + (v1.y * v2.y);
}