#include "PlikZUzytkownikami.h"

PlikZUzytkownikami::PlikZUzytkownikami()
{
   nazwaPlikuZUzytkownikami="Uzytkownicy.txt";
}

void PlikZUzytkownikami::dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik)
{
    //fstream plikTekstowy;
    //tez mozemy przeniesc do pliku naglowkowego
    string liniaZDanymiUzytkownika = "";
    plikTekstowy.open(nazwaPlikuZUzytkownikami.c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        liniaZDanymiUzytkownika = zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(uzytkownik);

        //if (czyPlikJestPusty(plikTekstowy) == true)
        if (czyPlikJestPusty() == true)
        {
            plikTekstowy << liniaZDanymiUzytkownika;
        }
        else
        {
            plikTekstowy << endl << liniaZDanymiUzytkownika ;
        }
    }
    else
        cout << "Nie udalo sie otworzyc pliku " << nazwaPlikuZUzytkownikami << " i zapisac w nim danych." << endl;
    plikTekstowy.close();
}

//bool PlikZUzytkownikami::czyPlikJestPusty(fstream &plikTekstowy)
bool PlikZUzytkownikami::czyPlikJestPusty()
{
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}

string PlikZUzytkownikami::zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik)
{
    string liniaZDanymiUzytkownika = "";
    /*MetodyPomocnicze metodyPomocnicze;//obiekt by wywolac na nim metode
    liniaZDanymiUzytkownika += metodyPomocnicze.konwerjsaIntNaString(uzytkownik.pobierzId())+ '|';*/
    //lub mozna metode konwerjsaIntNaString uczynic statyczna, wtedy nie potrzeba tworzyc obiektu
    //wywolamy ta metode bezposrednio na klasie korzystajac z opreatora ::
    // w pliku .h musitmy dopisac przy metodzie static
    liniaZDanymiUzytkownika += MetodyPomocnicze::konwerjsaIntNaString(uzytkownik.pobierzId())+ '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzLogin() + '|';
    liniaZDanymiUzytkownika += uzytkownik.pobierzHaslo() + '|';

    return liniaZDanymiUzytkownika;
}
