#include "Punct3D.h"
#include <cmath>

Punct3D::Punct3D() : Punct2D(), z(0.0) {}

Punct3D::Punct3D(double x, double y, double z) : Punct2D(x, y), z(z) {}

Punct3D::Punct3D(const Punct3D& other) : Punct2D(other), z(other.z) {}

Punct3D::Punct3D(const Punct2D& punct2D, double z) : Punct2D(punct2D), z(z) {} // Added constructor

Punct3D::~Punct3D() {}

Punct3D& Punct3D::operator=(const Punct3D& other) {
    if (this != &other) {
        Punct2D::operator=(other);
        z = other.z;
    }
    return *this;
}

bool Punct3D::operator<(const Punct3D& other) const {
    return (Punct2D::operator<(other)) || ((Punct2D::operator==(other)) && (z < other.z));
}

bool Punct3D::operator<=(const Punct3D& other) const {
    return (*this < other) || (*this == other);
}

bool Punct3D::operator>(const Punct3D& other) const {
    return !(*this <= other);
}

bool Punct3D::operator>=(const Punct3D& other) const {
    return !(*this < other);
}

bool Punct3D::operator==(const Punct3D& other) const {
    return (Punct2D::operator==(other)) && (z == other.z);
}

bool Punct3D::operator!=(const Punct3D& other) const {
    return !(*this == other);
}

Punct3D Punct3D::operator+(const Punct3D& other) const {
    return Punct3D(Punct2D::operator+(other), z + other.z);
}

Punct3D Punct3D::operator*(double scalar) const {
    return Punct3D(Punct2D::operator*(scalar), z * scalar);
}

Punct3D& Punct3D::operator+=(const Punct3D& other) {
    Punct2D::operator+=(other);
    z += other.z;
    return *this;
}

Punct3D& Punct3D::operator-=(const Punct3D& other) {
    Punct2D::operator-=(other);
    z -= other.z;
    return *this;
}

Punct3D& Punct3D::operator*=(double scalar) {
    Punct2D::operator*=(scalar);
    z *= scalar;
    return *this;
}

Punct3D Punct3D::operator++(int) {
    Punct3D temp(*this);
    operator++();
    return temp;
}

Punct3D& Punct3D::operator++() {
    Punct2D::operator++();
    ++z;
    return *this;
}

double Punct3D::distanta(const Punct3D& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2) + pow(z - other.z, 2));
}
