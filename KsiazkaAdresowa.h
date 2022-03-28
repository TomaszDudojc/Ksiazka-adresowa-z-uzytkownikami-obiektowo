#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;//tworzymy obiekt, aby wywolac na nim metody
public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa();
};

#endif
