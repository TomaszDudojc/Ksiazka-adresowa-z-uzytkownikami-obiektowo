#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;//tworzymy obiekt, aby wywolac na nim metody
public:
    //lista inicjalizacyjna, aby uzytkownik mogl sam ustalac nazwePlikuZUztykownikami
    //nazwePliku przeslemy do UzytkownikMenedzer, a ten przesle do PlikZUztykwonikami
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();//wklejamy cialo konstruktora z plik.cpp
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
