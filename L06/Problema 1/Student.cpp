#include "Student.h"

Student::Student(const std::string &CNP, const std::string &nume, const std::string &email, int nota)
    : Persoana(CNP, nume), email(email), nota(nota) {}

int Student::getNota() const
{
    return nota;
}

std::string Student::detalii() const
{
    return "Studentul " + nume + " are nota " + std::to_string(nota) + ".";
}
