#ifndef BANCA_H
#define BANCA_H

#include "Client.h"
#include <vector>

class Banca {
private:
    std::string codBanca;
    std::vector<Client> clienti;

public:
    Banca(const std::string& codBanca);
    void adaugaClient(const Client& client);
    void afisaredateBanca() const;
};

#endif // BANCA_H
