#include <iostream>
using namespace std;


class Fractie
{
private:
    double numarator;
    double numitor;

public:
    Fractie() : numarator(0), numitor(1) {}

    Fractie(double numarator) : numarator(numarator), numitor(1) {}

    Fractie(double numarator, double numitor) : numarator(numarator), numitor(numitor) {}

    Fractie(const Fractie &other) : numarator(other.numarator), numitor(other.numitor) {}

    // Metode get/set
    double getNumarator() const
    {
        return numarator;
    }

    void setNumarator(double numarator)
    {
        this->numarator = numarator;
    }

    double getNumitor() const
    {
        return numitor;
    }

    void setNumitor(double numitor)
    {
        this->numitor = numitor;
    }

    // Supraincarcarea operatorilor

    Fractie operator+(const Fractie &other) const
    {
        return Fractie(numarator * other.numitor + other.numarator * numitor, numitor * other.numitor);
    }

    Fractie operator-(const Fractie &other) const
    {
        return Fractie(numarator * other.numitor - other.numarator * numitor, numitor * other.numitor);
    }

    Fractie operator*(const Fractie &other) const
    {
        return Fractie(numarator * other.numarator, numitor * other.numitor);
    }

    Fractie operator/(const Fractie &other) const
    {
        if (other.numarator == 0)
        {
            cerr << "Error: Division by zero." << endl;
            return Fractie();
        }

        return Fractie(numarator * other.numitor, numitor * other.numarator);
    }

    bool operator<(const Fractie &other) const
    {
        return (numarator * other.numitor) < (other.numarator * numitor);
    }

    bool operator>(const Fractie &other) const
    {
        return (numarator * other.numitor) > (other.numarator * numitor);
    }

    bool operator<=(const Fractie &other) const
    {
        return (numarator * other.numitor) <= (other.numarator * numitor);
    }

    bool operator>=(const Fractie &other) const
    {
        return (numarator * other.numitor) >= (other.numarator * numitor);
    }

    bool operator!=(const Fractie &other) const
    {
        return (numarator * other.numitor) != (other.numarator * numitor);
    }

    bool operator==(const Fractie &other) const
    {
        return (numarator * other.numitor) == (other.numarator * numitor);
    }


    static int cmmdc(int a, int b)
    {
        while (b)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    Fractie simplifica() const
    {
        int divCom = cmmdc(static_cast<int>(numarator), static_cast<int>(numitor));
        double nrtSimpl = numarator / divCom;
        double numSimpl = numitor / divCom;

        return Fractie(nrtSimpl, numSimpl);
    }
};

int main()
{
    Fractie fractie1(16, 4);
    Fractie fractie2(4, 2);
    Fractie fractie3;

    Fractie suma = fractie1 + fractie2;
    cout << "Suma: " << suma.getNumarator() << " / " << suma.getNumitor() << "\n";

    Fractie diferenta = fractie1 - fractie2;
    cout << "Diferenta: " << diferenta.getNumarator() << " / " << diferenta.getNumitor() << "\n";

    Fractie produs = fractie1 * fractie2;
    cout << "Produs: " << produs.getNumarator() << " / " << produs.getNumitor() << "\n";

    Fractie impartire = fractie1 / fractie2;
    cout << "Impartire: " << impartire.getNumarator() << " / " << impartire.getNumitor() << "\n";

    if (fractie1 < fractie2)
    {
        cout << "fractie1 este mai mica decat fractie2\n";
    }
    else
    {
        cout << "fractie1 nu este mai mica decat fractie2\n";
    }

    Fractie simplificare = fractie1.simplifica();
    cout << "Fractia simplificata: " << simplificare.getNumarator() << " / " << simplificare.getNumitor() << "\n";

    return 0;
}
