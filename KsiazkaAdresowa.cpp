#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.logowanieUzytkownika();
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikManager.wylogowanieUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}

void KsiazkaAdresowa::wypiszWszystkichAdresatowZalogowanegoUzytkownika()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager->wypiszWszystkichAdresatowZalogowanegoUzytkownika();
    }
    else
    {
        cout << "Aby dodac Adresata nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}

void KsiazkaAdresowa::dodajAdresataZalogowanegoUzytkownika()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac Adresata nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikManager.czyUzytkownikJestZalogowany();
}
