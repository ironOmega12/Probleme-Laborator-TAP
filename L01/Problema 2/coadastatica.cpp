#include "coadastatica.h"
#include <iostream>

Coada::Coada()
{
    front = -1;
    rear = -1;
}

bool Coada::isEmpty() const
{
    return front == -1;
}

bool Coada::isFull() const
{
    return (rear + 1) % MAX_SIZE == front;
}

void Coada::enqueue(int value)
{
    if (isFull())
    {
        std::cerr << "Error: Queue is full.\n";
        return;
    }

    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX_SIZE;
    }

    elements[rear] = value;
}

int Coada::dequeue()
{
    if (isEmpty())
    {
        std::cerr << "Error: Queue is empty.\n";
        return -1; // Or throw an exception
    }

    int value = elements[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX_SIZE;
    }

    return value;
}

void Coada::display() const
{
    if (isEmpty())
    {
        std::cout << "Queue is empty.\n";
        return;
    }

    int i = front;
    do
    {
        std::cout << elements[i] << " ";
        i = (i + 1) % MAX_SIZE;
    } while (i != (rear + 1) % MAX_SIZE);

    std::cout << "\n";
}
