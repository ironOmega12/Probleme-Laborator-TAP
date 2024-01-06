#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <iostream>

class Angajat
{
private:
    double tarifOrar;
    int nrOre;

public:
    Angajat(double tarifOrar, int nrOre);

    Angajat(const Angajat &other);

    ~Angajat();

    double getSalar() const;

    double getTarifOrar();

    Angajat &operator=(const Angajat &other);

    friend std::istream &operator>>(std::istream &in, Angajat &angajat);

    friend std::ostream &operator<<(std::ostream &out, const Angajat &angajat);
};

#endif // ANGAJAT_H
