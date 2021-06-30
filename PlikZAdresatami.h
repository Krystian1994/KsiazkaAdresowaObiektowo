#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    string nazwaTymczasowegoPlikuZAdresatami;

    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    int podajIdWybranegoAdresata();
    //int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    //void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    void usunWybranegoAdresataZpliku(int idAdresata);
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata();
    int pobierzZPlikuIdOstatniegoAdresata();
public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        nazwaTymczasowegoPlikuZAdresatami = "AdresaciTymczasowa.txt";
        idOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void usunAdresata(vector <Adresat> adresaci);
};



#endif PLIKZADRESATAMI_H
