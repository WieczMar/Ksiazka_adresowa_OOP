#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikzAdresatami.h"

using namespace std;

class AdresatManager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    //int idUsunietegoAdresata;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();

public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
         adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void wypiszWszystkichAdresatowZalogowanegoUzytkownika();
    void dodajAdresata();

};

#endif
