#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string specie;
    int varsta;

public:
    Animal(const std::string& specie, int varsta);
    virtual ~Animal() {}

    virtual void heterotrof() const = 0;

    // Getters and setters
    const std::string& getSpecie() const;
    void setSpecie(const std::string& specie);

    int getVarsta() const;
    void setVarsta(int varsta);
};

#endif // ANIMAL_H
