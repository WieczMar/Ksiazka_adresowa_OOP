#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichAdresatowZalogowanegoUzytkownika();
    ksiazkaAdresowa.dodajAdresataZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichAdresatowZalogowanegoUzytkownika();

    return 0;
}

