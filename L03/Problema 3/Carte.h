#ifndef CARTE_H
#define CARTE_H

#include <string>

using namespace std;

class Carte {
private:
    string autor;
    string titlu;
    string ISBN;
    double pret;
    static int numarCarti; // Variabilă statică pentru numărul total de instanțe

public:
    Carte(const string &autor, const string &titlu, const string &ISBN, double pret);
    const string& getAutor() const;
    const string& getTitlu() const;
    const string& getISBN() const;
    double getPret() const;
    static int getNumarCarti();
    void afisare() const;
};

#endif // CARTE_H
