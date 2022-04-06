#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;//tworzymy obiekt, aby wywolac na nim metody
    //AdresatMenedzer adresatMenedzer;
    AdresatMenedzer *adresatMenedzer;         //tworzymy wskaznik na obiekt
    const string NAZWA_PLIKU_Z_ADRESATAMI;  //poniewaz nie tworzymy obiektu adresatMenedzer tylko wskaznik na niego tutaj musimy stworzyc nowa zmienna do naszego konstruktora
public:
    //lista inicjalizacyjna, aby uzytkownik mogl sam ustalac nazwePlikuZUztykownikami
    //nazwePliku przeslemy do UzytkownikMenedzer, a ten przesle do PlikZUztykwonikami
    /*KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami),adresatMenedzer(nazwaPlikuZAdresatami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();//wklejamy cialo konstruktora z plik.cpp
    };*/

    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMenedzer (nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami)  //konstroktor KsiazkaAdresowa zawiera przypisanie wartosci do zmiennych
        // nazwaPlikuZUzytkownikami (na obiekcie uzytkownikMenedzer) i nazwaPlikuZAdresatami na zmiennej!!! bo obiektu adresaciMenedzer nie tworzylismy
    {
        adresatMenedzer = NULL;          //wskaznik musimy zawsze ustawic na NULL,
    };

    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
