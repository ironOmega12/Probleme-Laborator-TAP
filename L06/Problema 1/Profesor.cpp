#include "Profesor.h"

Profesor::Profesor(const std::string &CNP, const std::string &nume, const std::string &email, const std::string &materie)
    : Persoana(CNP, nume), email(email), materie(materie) {}

std::string Profesor::getMaterie() const
{
    return materie;
}

std::string Profesor::detalii() const
{
    return "Profesorul " + nume + " preda " + materie + ".";
}
