#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikzUzytkownikami.h"
#include "AdresatManager.h"

using namespace std;

class UzytkownikManager
{
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;
    vector <Uzytkownik> uzytkownicy;
    string nazwaPlikuZAdresatami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    int ustawIdUzytkownika();

public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami, string pobranaNazwaPlikuZAdresatami): plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
    nazwaPlikuZAdresatami = pobranaNazwaPlikuZAdresatami;
    };
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    int wylogowanieUzytkownika();
    void wypiszWszystkichAdresatowZalogowanegoUzytkownika();
    void dodajAdresataZalogowanegoUzytkownika();

};

#endif
