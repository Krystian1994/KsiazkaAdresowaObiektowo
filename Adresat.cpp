#include "Adresat.h"

    int Adresat::ustawId(int noweId)
    {
        if(noweId > 0)
        {
            id = noweId;
        }
        return id;
    }
    int Adresat::ustawIdUzytkownika(int noweIdUzytkownika)
    {
        idUzytkownika = noweIdUzytkownika;
        return idUzytkownika;
    }
    string Adresat::ustawImie(string noweImie)
    {
        imie = noweImie;
        return imie;
    }
    string Adresat::ustawNazwisko(string noweNazwisko)
    {
        nazwisko = noweNazwisko;
        return nazwisko;
    }
    string Adresat::ustawNumerTelefonu(string nowyNumerTelefonu)
    {
        numerTelefonu = nowyNumerTelefonu;
        return numerTelefonu;
    }
    string Adresat::ustawEmail(string nowyEmail)
    {
        email = nowyEmail;
        return email;
    }
    string Adresat::ustawAdres(string nowyAdres)
    {
        adres = nowyAdres;
        return adres;
    }

    int Adresat::pobierzId()
    {
        return id;
    }
    int Adresat::pobierzIdUzytkownika()
    {
        return idUzytkownika;
    }
    string Adresat::pobierzImie()
    {
        return imie;
    }
    string Adresat::pobierzNazwisko()
    {
        return nazwisko;
    }
    string Adresat::pobierzNumerTelefonu()
    {
        return numerTelefonu;
    }
    string Adresat::pobierzEmail()
    {
        return email;
    }
    string Adresat::pobierzAdres()
    {
        return adres;
    }
