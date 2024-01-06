#include "Angajat.h"

Angajat::Angajat(const std::string &CNP, const std::string &nume, const std::string &email, const std::string &departament)
    : Persoana(CNP, nume), email(email), departament(departament) {}

std::string Angajat::getDepartament() const
{
    return departament;
}

std::string Angajat::detalii() const
{
    return "Angajatul " + nume + " face parte din departamentul " + departament + ".";
}
