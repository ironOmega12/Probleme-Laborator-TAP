#ifndef PUNCT3D_H
#define PUNCT3D_H

#include "Punct2D.h"

class Punct3D : public Punct2D {
private:
    double z;

public:
    Punct3D();
    Punct3D(double x, double y, double z);
    Punct3D(const Punct3D& other);
    Punct3D(const Punct2D& punct2D, double z);
    ~Punct3D();

    Punct3D& operator=(const Punct3D& other);

    bool operator<(const Punct3D& other) const;
    bool operator<=(const Punct3D& other) const;
    bool operator>(const Punct3D& other) const;
    bool operator>=(const Punct3D& other) const;
    bool operator==(const Punct3D& other) const;
    bool operator!=(const Punct3D& other) const;

    Punct3D operator+(const Punct3D& other) const;
    Punct3D operator*(double scalar) const;
    Punct3D& operator+=(const Punct3D& other);
    Punct3D& operator-=(const Punct3D& other);
    Punct3D& operator*=(double scalar);
    Punct3D operator++(int);
    Punct3D& operator++();
    
    double distanta(const Punct3D& other) const;
};

#endif // PUNCT3D_H
