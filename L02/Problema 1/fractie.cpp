#include <iostream>

class Fractie
{
private:
    double numarator;
    double numitor;

public:
    Fractie()
    {
        this->numarator = 0;
        this->numitor = 1;
    }
    Fractie(double numarator)
    {
        this->numarator = numarator;
        this->numitor = 1;
    }
    Fractie(double numarator, double numitor)
    {
        this->numarator = numarator;
        this->numitor = numitor;
    }
    Fractie(const Fractie &other)
    {
        this->numarator = other.numarator;
        this->numitor = other.numitor;
    }

    // Metode get/set
    double getNumarator()
    {
        return numarator;
    }
    void setNumarator(double numarator)
    {
        this->numarator = numarator;
    }
    double getNumitor()
    {
        return numitor;
    }
    void setNumitor(double numitor)
    {
        this->numitor = numitor;
    }

    Fractie adunare(const Fractie &other) const // metoda de la curs
    {
        double resultNumarator = this->numarator + other.numarator;
        double resultNumitor = this->numitor + other.numitor;
        return Fractie(resultNumarator, resultNumitor);
    }

    int adunare2(Fractie a, Fractie b) // asta e alta metoda gandita de mine
                                       // intrucat la curs nu facusem inca problema cu fractie
    {
        return a.getNumarator() + b.getNumarator();
    }

    Fractie scadere(const Fractie &other) const
    {
        double resultNumarator = this->numarator - other.numarator;
        double resultNumitor = this->numitor - other.numitor;
        return Fractie(resultNumarator, resultNumitor);
    }

    Fractie inmultire(const Fractie &other) const
    {
        double resultNumarator = this->numarator * other.numarator;
        double resultNumitor = this->numitor * other.numitor;
        return Fractie(resultNumarator, resultNumitor);
    }

    Fractie impartire(const Fractie &other) const
    {
        if (other.numarator == 0)
        {
            std::cerr << "Error: Division by zero." << std::endl;
            return Fractie();
        }

        double resultNumarator = this->numarator / other.numarator;
        double resultNumitor = this->numitor / other.numarator;
        return Fractie(resultNumarator, resultNumitor);
    }

    static int cmmdc(int a, int b)
    { // cmmdc
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
        int divCom = cmmdc(this->numarator, this->numitor);
        double nrtSimpl = this->numarator / divCom;
        double numSimpl = this->numitor / divCom;

        return Fractie(nrtSimpl, numSimpl);
    }
};

int main()
{
    Fractie fractie1(16, 4);
    Fractie fractie2(4, 2);
    Fractie fractie3;

    double rezultat = fractie3.adunare2(fractie1, fractie2);
    std::cout << rezultat << "\n";

    Fractie suma = fractie1.adunare(fractie2);
    std::cout << suma.getNumarator() << " " << suma.getNumitor() << "\n";

    std::cout << Fractie::cmmdc(24, 4) << "\n";

    Fractie simplifica = fractie1.simplifica();
}