#ifndef CLIENT_H
#define CLIENT_H

#include "ContBancar.h"
#include <vector>

class Client {
private:
    std::string nume;
    std::string prenume;
    std::string adresa;
    std::vector<ContBancar> conturi;

public:
    Client(const std::string& nume, const std::string& prenume, const std::string& adresa);
    void adaugaCont(const ContBancar& cont);
    void afisaredateClient() const;
};

#endif // CLIENT_H
