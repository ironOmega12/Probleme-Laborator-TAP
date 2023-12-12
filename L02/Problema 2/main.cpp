#include "Banca.h"
#include "Client.h"
#include "ContBancar.h"
#include <iostream>

int main()
{
    Banca banca("123");

    Client client1("Adrian", "Minune", "Str. Primaverii");
    Client client2("Nicolae", "Guta", "Str. Florilor");

    ContBancar cont1_client1("RO01", 1000.0, "ron");
    ContBancar cont2_client1("EUR02", 500.0, "eur");

    ContBancar cont1_client2("RO03", 2000.0, "ron");
    ContBancar cont2_client2("RO04", 3000.0, "ron");

    client1.adaugaCont(cont1_client1);
    client1.adaugaCont(cont2_client1);

    client2.adaugaCont(cont1_client2);
    client2.adaugaCont(cont2_client2);

    banca.adaugaClient(client1);
    banca.adaugaClient(client2);

    banca.afisaredateBanca();

    return 0;
}
