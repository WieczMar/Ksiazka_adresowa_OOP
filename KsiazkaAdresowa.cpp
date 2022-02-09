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
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
    }
    else
    {
        cout << "Aby zmienic haslo nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
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

void KsiazkaAdresowa::wyszkajAdresatowPoImieniu()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager->wyszkajAdresatowPoImieniu();
    }
    else
    {
        cout << "Aby wyszukac Adresatow nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}

void KsiazkaAdresowa::wyszkajAdresatowPoNazwisku()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager->wyszkajAdresatowPoNazwisku();
    }
    else
    {
        cout << "Aby wyszukac Adresatow nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}

void KsiazkaAdresowa::usunAdresata()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager->usunAdresata();
    }
    else
    {
        cout << "Aby usunac Adresata nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
            adresatManager->edytujAdresata();
    }
    else
    {
        cout << "Aby edytowac Adresata nalezy najpierw sie zalogowac." << endl;
        system("pasue");
    }
}
