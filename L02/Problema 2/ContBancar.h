#ifndef CONT_BANCAR_H
#define CONT_BANCAR_H

#include <string>

class ContBancar {
private:
    std::string numarCont;
    float suma;
    std::string moneda;

public:
    ContBancar(const std::string& numarCont, float suma, const std::string& moneda);
    ContBancar(const ContBancar& other);

    void afisaredateCont() const;

    float getSumaTotala() const;
    float getDobanda() const;
    void depunere(float suma);
    void extragere(float suma);
    void transfer(ContBancar& contDest, float suma);
};

#endif // CONT_BANCAR_H
