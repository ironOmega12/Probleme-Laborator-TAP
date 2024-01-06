#include "Angajat.h"
#include "Manager.h"

int main() {
    Angajat angajat(10.0, 40);
    std::cout << "Angajat:\n" << angajat << "\n\n";

    Manager manager(15.0, 40, 5);
    std::cout << "Manager:\n"
              << "Tariful orar: " << manager.getTarifOrar() << "\nSalarul: " << manager.getSalar() << "\n";

    return 0;
}
