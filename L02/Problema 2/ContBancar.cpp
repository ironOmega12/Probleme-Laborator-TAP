#include "ContBancar.h"
#include <iostream>

using namespace std;

ContBancar::ContBancar(const string& numarCont, float suma, const string& moneda)
    : numarCont(numarCont), suma(suma), moneda(moneda) {}

ContBancar::ContBancar(const ContBancar& other)
    : numarCont(other.numarCont), suma(other.suma), moneda(other.moneda) {}

void ContBancar::afisaredateCont() const {
    cout << "Numar cont: " << numarCont << "\n";
    cout << "Suma: " << suma << "\n";
    cout << "Moneda: " << moneda << "\n";
}

float ContBancar::getSumaTotala() const {
    return suma;
}

float ContBancar::getDobanda() const {
    if (moneda == "ron") {
        if (suma < 500) {
            return 0.003 * suma;
        } else {
            return 0.008 * suma;
        }
    } else if (moneda == "eur") {
        return 0.001 * suma;
    } else {
        return 0.0;
    }
}

void ContBancar::depunere(float suma) {
    this->suma += suma;
}

void ContBancar::extragere(float suma) {
    if (this->suma >= suma) {
        this->suma -= suma;
    } else {
        cout << "Error: Insufficient funds.\n";
    }
}

void ContBancar::transfer(ContBancar& contDest, float suma) {
    if (this->suma >= suma) {
        this->suma -= suma;
        contDest.suma += suma;
    } else {
        cout << "Error: Insufficient funds for transfer.\n";
    }
}
