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
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    //int idUsunietegoAdresata;

    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();

public:
    AdresatManager(string nazwaPlikuZAdresatami, int pobraneIdZalogowanegoUzytkownika): plikZAdresatami(nazwaPlikuZAdresatami) {
    idZalogowanegoUzytkownika = pobraneIdZalogowanegoUzytkownika;
    wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    };
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wypiszWszystkichAdresatowZalogowanegoUzytkownika();
    void dodajAdresata();

};

#endif
