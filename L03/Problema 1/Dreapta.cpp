#include "Dreapta.h"
#include <iostream>

Dreapta::Dreapta(double m, double n) : m(m), n(n) {}

Dreapta::Dreapta(const Dreapta &other) : m(other.m), n(other.n)
{
    std::cout << "Apel constructor de copiere\n";
}

Dreapta::~Dreapta()
{
    std::cout << "Apel destructor\n";
}

void Dreapta::afisare() const
{
    std::cout << "y = " << m << "x + " << n << "\n";
}
