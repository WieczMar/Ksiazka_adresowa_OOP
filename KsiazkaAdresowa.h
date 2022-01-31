#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikManager(nazwaPlikuZUzytkownikami) {
    uzytkownikManager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
