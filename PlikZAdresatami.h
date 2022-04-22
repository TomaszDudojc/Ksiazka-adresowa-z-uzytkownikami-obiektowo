#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresta;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void edytujWybranaLinieWPliku(int idAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);

public:
    //lista inicjalizacyjna, konstruktor usuwamy z pliku .cpp
    //musi byc cialo konstruktora {}, moze byc puste
    PlikZAdresatami(string nazwaPlikuZAdresatami): PlikTekstowy(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresta = 0;
        NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "AdresaciTymczasowy.txt";
    };

   bool dopiszAdresataDoPliku(Adresat adresat);
   vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
   int pobierzZPlikuIdOstatniegoAdresata();

   void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
   void zaktualizujDaneWybranegoAdresata(Adresat adresat);
};

#endif
