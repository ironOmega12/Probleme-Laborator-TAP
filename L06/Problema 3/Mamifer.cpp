#include "Mamifer.h"
#include <iostream>

Mamifer::Mamifer(const std::string& specie, int varsta, double lungime)
    : Animal(specie, varsta), lungime(lungime) {}

void Mamifer::heterotrof() const {
    std::cout << "Mamiferul " << specie << " este heterotrof." << std::endl;
}

double Mamifer::getLungime() const {
    return lungime;
}

void Mamifer::setLungime(double lungime) {
    this->lungime = lungime;
}
