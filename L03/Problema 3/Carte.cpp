#include "Carte.h"
#include <iostream>
#include <string>
using namespace std;

int Carte::numarCarti = 0;

Carte::Carte(const string &autor, const string &titlu, const string &ISBN, double pret)
    : autor(autor), titlu(titlu), ISBN(ISBN), pret(pret) {
    ++numarCarti; 
}

const string& Carte::getAutor() const {
    return autor;
}

const string& Carte::getTitlu() const {
    return titlu;
}

const string& Carte::getISBN() const {
    return ISBN;
}

double Carte::getPret() const {
    return pret;
}

int Carte::getNumarCarti() {
    return numarCarti;
}

void Carte::afisare() const {
    cout << "Autor: " << autor << ", Titlu: " << titlu << ", ISBN: " << ISBN << ", Pret: " << pret << endl;
}
