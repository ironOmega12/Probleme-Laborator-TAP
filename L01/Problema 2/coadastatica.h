#ifndef COADA_H
#define COADA_H

const int MAX_SIZE = 100;

class Coada {
private:
    int elements[MAX_SIZE];
    int front;
    int rear;

public:
    Coada();
    bool isEmpty() const;
    bool isFull() const;
    void enqueue(int value);
    int dequeue();
    void display() const;
};

#endif // COADA_H
