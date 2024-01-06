#include "Ornitorinc.h"
#include <iostream>

Ornitorinc::Ornitorinc(const std::string& specie, int varsta, double lungime, int nrPene)
    : Animal(specie, varsta), Mamifer(specie, varsta, lungime), Pasare(specie, varsta, nrPene) {}

void Ornitorinc::amfibiu() const {
    std::cout << "Ornitorincul " << getSpecie() << " poate trai atat pe uscat cat si in apa." << std::endl;
}
