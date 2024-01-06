#ifndef MANAGER_H
#define MANAGER_H

#include "Angajat.h"

class Manager : public Angajat
{
private:
    int numarSubordonati;

public:
    Manager(double tarifOrar, int nrOre, int numarSubordonati);

    Manager(const Manager &other);

    ~Manager();

    double getSalar() const;
};

#endif // MANAGER_H
