#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    char wybor;
    while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}
/*
//testy
#include "AdresatMenedzer.h"
int a_main()
{
    AdresatMenedzer adresatMenedzer ("Adresaci.txt", 1);
    adresatMenedzer.wyswietlWszystkichAdresatow();
    //adresatMenedzer.dodajAdresata();
}
#include "Adresat.h"
#include "PlikZAdresatami.h"


int main()
{
  PlikZAdresatami plikZAdresatami("adr-probny.txt");
  Adresat adresat(8,11,"stefan","gruby","123","stefcio@gruby","katowice daloko od szosy");

  plikZAdresatami.dopiszAdresataDoPliku(adresat);
  cout<<"owe id: "<<plikZAdresatami.pobierzZPlikuIdOstatniegoAdresata();
}

#include "KsiazkaAdresowa.h"
int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
}
*/
