#include "Carte.h"
#include <vector>
#include <iostream>

using namespace std;


int main() {
    vector<Carte> biblioteca;

    biblioteca.emplace_back("Autor1", "Titlu1", "ISBN1", 20.5);
    biblioteca.emplace_back("Autor2", "Titlu2", "ISBN2", 25.0);
    biblioteca.emplace_back("Autor1", "Titlu3", "ISBN3", 18.75);
    biblioteca.emplace_back("Autor3", "Titlu4", "ISBN4", 30.2);

    string autorCautat;
    cout << "Numele autorului: ";
    cin >> autorCautat;

    cout << "Cartile cu autorul " << autorCautat << " sunt:" << endl;
    for (const Carte &carte : biblioteca) {
        if (carte.getAutor() == autorCautat) {
            carte.afisare();
        }
    }

    cout << "Numarul total de carti: " << Carte::getNumarCarti() << endl;

    return 0;
}
