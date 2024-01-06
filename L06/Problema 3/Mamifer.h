#ifndef MAMIFER_H
#define MAMIFER_H

#include "Animal.h"

class Mamifer : virtual public Animal {
private:
    double lungime;

public:
    Mamifer(const std::string& specie, int varsta, double lungime);

    void heterotrof() const override;

    // Getter and setter for lungime
    double getLungime() const;
    void setLungime(double lungime);
};

#endif // MAMIFER_H
