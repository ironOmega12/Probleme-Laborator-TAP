#include <iostream>
#include "Ornitorinc.h"

int main() {
    Ornitorinc ornitorinc("Ornithorhynchus anatinus", 5, 0.6, 100);

    ornitorinc.Mamifer::heterotrof();

    ornitorinc.Pasare::heterotrof();

    ornitorinc.amfibiu();

    std::cout << "Specie: " << ornitorinc.getSpecie() << std::endl;
    ornitorinc.setVarsta(6);
    std::cout << "Varsta: " << ornitorinc.getVarsta() << " ani" << std::endl;

    std::cout << "Lungime: " << ornitorinc.getLungime() << " metri" << std::endl;
    ornitorinc.setLungime(0.7);
    std::cout << "Lungime actualizata: " << ornitorinc.getLungime() << " metri" << std::endl;

    std::cout << "Numar pene: " << ornitorinc.getNrPene() << std::endl;
    ornitorinc.setNrPene(120);
    std::cout << "Numar pene actualizat: " << ornitorinc.getNrPene() << std::endl;

    return 0;
}
