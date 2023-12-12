#ifndef DREAPTA_H
#define DREAPTA_H

class Dreapta
{
private:
    double m;
    double n; 

public:
    Dreapta(double m = 1, double n = 0);

    Dreapta(const Dreapta &other);

    ~Dreapta();

    void afisare() const;
};

#endif // DREAPTA_H
