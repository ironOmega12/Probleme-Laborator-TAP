#include "Client.h"
#include <iostream>

Client::Client(const std::string& nume, const std::string& prenume, const std::string& adresa)
    : nume(nume), prenume(prenume), adresa(adresa) {}

void Client::adaugaCont(const ContBancar& cont) {
    conturi.push_back(cont);
}

void Client::afisaredateClient() const {
    std::cout << "Nume: " << nume << "\n";
    std::cout << "Prenume: " << prenume << "\n";
    std::cout << "Adresa: " << adresa << "\n";

    for (const auto& cont : conturi) {
        cont.afisaredateCont();
    }
    std::cout << "\n";
}
