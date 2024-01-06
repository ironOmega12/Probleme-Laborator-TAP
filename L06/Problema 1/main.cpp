#include <iostream>
#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"

int main()
{
    Student student("1234567890123", "john travolta", "john@da.com", 9);

    std::cout << student.detalii() << std::endl;

    Profesor profesor("9876543210987", "ingrid no", "ingrid@da.com", "Matematica");

    std::cout << profesor.detalii() << std::endl;

    Angajat angajat("11122334", "Manevra Spital", "manevra@spital.com", "HR");

    std::cout << angajat.detalii() << std::endl;

    return 0;
}
