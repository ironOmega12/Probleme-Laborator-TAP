#include "Pasare.h"
#include <iostream>

Pasare::Pasare(const std::string& specie, int varsta, int nrPene)
    : Animal(specie, varsta), nrPene(nrPene) {}

void Pasare::heterotrof() const {
    std::cout << "Pasarea " << specie << " este heterotrofa." << std::endl;
}

int Pasare::getNrPene() const {
    return nrPene;
}

void Pasare::setNrPene(int nrPene) {
    this->nrPene = nrPene;
}
