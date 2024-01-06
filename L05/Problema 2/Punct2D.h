#ifndef PUNCT2D_H
#define PUNCT2D_H

class Punct2D {
protected:
    double x;
    double y;

public:
    Punct2D();
    Punct2D(double x, double y);
    virtual ~Punct2D();

    Punct2D& operator=(const Punct2D& other);

    bool operator<(const Punct2D& other) const;
    bool operator<=(const Punct2D& other) const;
    bool operator>(const Punct2D& other) const;
    bool operator>=(const Punct2D& other) const;
    bool operator==(const Punct2D& other) const;

    Punct2D operator*(double scalar) const;
    Punct2D operator+(const Punct2D& other) const;
    Punct2D& operator+=(const Punct2D& other); 
    Punct2D& operator-=(const Punct2D& other); 
    Punct2D& operator*=(double scalar);        
    Punct2D operator++(int);                    
    Punct2D& operator++();                       
};

#endif // PUNCT2D_H
