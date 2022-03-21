#include <iostream>
#include <vector>
#include <windows.h>//aby dzia³a³ system("pause") w pliku cpp

#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
   void rejestracjaUzytkownika();
   void wypiszWszystkichUzytkownikow();
};
