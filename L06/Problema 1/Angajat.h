#ifndef ANGAJAT_H
#define ANGAJAT_H

#include "Persoana.h"

class Angajat : public Persoana
{
private:
    std::string email;
    std::string departament;

public:
    Angajat(const std::string &CNP, const std::string &nume, const std::string &email, const std::string &departament);

    std::string getDepartament() const;
    std::string detalii() const override;
};

#endif // ANGAJAT_H
