#include "Manager.h"

Manager::Manager(double tarifOrar, int nrOre, int numarSubordonati)
    : Angajat(tarifOrar, nrOre), numarSubordonati(numarSubordonati) {}

Manager::Manager(const Manager &other)
    : Angajat(other), numarSubordonati(other.numarSubordonati) {}

Manager::~Manager() {}

double Manager::getSalar() const {
    return Angajat::getSalar() * 1.5;
}
