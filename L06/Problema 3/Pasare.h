#ifndef PASARE_H
#define PASARE_H

#include "Animal.h"

class Pasare : virtual public Animal {
private:
    int nrPene;

public:
    Pasare(const std::string& specie, int varsta, int nrPene);

    void heterotrof() const override;

    int getNrPene() const;
    void setNrPene(int nrPene);
};

#endif // PASARE_H
