#include "Banca.h"
#include <iostream>

Banca::Banca(const std::string& codBanca) : codBanca(codBanca) {}

void Banca::adaugaClient(const Client& client) {
    clienti.push_back(client);
}

void Banca::afisaredateBanca() const {
    std::cout << "Cod Banca: " << codBanca << "\n";
    std::cout << "Numar Clienti: " << clienti.size() << "\n";

    for (const auto& client : clienti) {
        client.afisaredateClient();
    }
}
