#ifndef STUDENT_H
#define STUDENT_H

#include "Persoana.h"

class Student : public Persoana
{
private:
    std::string email;
    int nota;

public:
    Student(const std::string &CNP, const std::string &nume, const std::string &email, int nota);

    int getNota() const;
    std::string detalii() const override;
};

#endif // STUDENT_H
