#include "Punct2D.h"

Punct2D::Punct2D() : x(0.0), y(0.0) {}

Punct2D::Punct2D(double x, double y) : x(x), y(y) {}

Punct2D::~Punct2D() {}

Punct2D& Punct2D::operator=(const Punct2D& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Punct2D::operator<(const Punct2D& other) const {
    return (x < other.x) || ((x == other.x) && (y < other.y));
}

bool Punct2D::operator<=(const Punct2D& other) const {
    return (*this < other) || (*this == other);
}

bool Punct2D::operator>(const Punct2D& other) const {
    return !(*this <= other);
}

bool Punct2D::operator>=(const Punct2D& other) const {
    return !(*this < other);
}

bool Punct2D::operator==(const Punct2D& other) const {
    return (x == other.x) && (y == other.y);
}

Punct2D Punct2D::operator*(double scalar) const {
    return Punct2D(x * scalar, y * scalar);
}

Punct2D Punct2D::operator+(const Punct2D& other) const {
    return Punct2D(x + other.x, y + other.y);
}

Punct2D& Punct2D::operator+=(const Punct2D& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Punct2D& Punct2D::operator-=(const Punct2D& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Punct2D& Punct2D::operator*=(double scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

Punct2D Punct2D::operator++(int) {
    Punct2D temp(*this);
    operator++();
    return temp;
}

Punct2D& Punct2D::operator++() {
    ++x;
    ++y;
    return *this;
}
