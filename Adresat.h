#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;


class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    int ustawId(int noweId);
    int ustawIdUzytkownika(int noweIdUzytkownika);
    string ustawImie(string noweImie);
    string ustawNazwisko(string noweNazwisko);
    string ustawNumerTelefonu(string nowyNumerTelefonu);
    string ustawEmail(string nowyEmail);
    string ustawAdres(string nowyAdres);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};

#endif  ADRESAT_H



