#include "Angajat.h"
#include <iostream>

Angajat::Angajat(double tarifOrar, int nrOre) : tarifOrar(tarifOrar), nrOre(nrOre) {}

Angajat::Angajat(const Angajat &other) : tarifOrar(other.tarifOrar), nrOre(other.nrOre) {}

Angajat::~Angajat() {}

double Angajat::getSalar() const {
    return tarifOrar * nrOre;
}

double Angajat::getTarifOrar() {
    return tarifOrar;
}

Angajat &Angajat::operator=(const Angajat &other) {
    if (this != &other) {
        tarifOrar = other.tarifOrar;
        nrOre = other.nrOre;
    }
    return *this;
}

std::istream &operator>>(std::istream &in, Angajat &angajat) {
    std::cout << "Introduceti tariful orar: ";
    in >> angajat.tarifOrar;
    std::cout << "Introduceti numarul de ore lucrate: ";
    in >> angajat.nrOre;
    return in;
}

std::ostream &operator<<(std::ostream &out, const Angajat &angajat) {
    out << "Tariful orar: " << angajat.tarifOrar << "\nSalarul: " << angajat.getSalar();
    return out;
}
