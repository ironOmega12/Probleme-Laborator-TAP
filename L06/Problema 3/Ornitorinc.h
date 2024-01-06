#ifndef ORNITORINC_H
#define ORNITORINC_H

#include "Mamifer.h"
#include "Pasare.h"

class Ornitorinc : public Mamifer, public Pasare {
public:
    Ornitorinc(const std::string& specie, int varsta, double lungime, int nrPene);

    void amfibiu() const;
};

#endif // ORNITORINC_H
