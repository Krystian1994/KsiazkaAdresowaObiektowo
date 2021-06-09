#include "Uzytkownik.h"

int Uzytkownik::ustawId(int noweId)
{
    if(noweId > 0)
        id = noweId;
        return id;
}
string Uzytkownik::ustawLogin(string nowyLogin)
{
    login = nowyLogin;
    return login;
}
string Uzytkownik::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
    return haslo;
}

int Uzytkownik::pobierzId()
{
    return id;
}
string Uzytkownik::pobierzLogin()
{
    return login;
}
string Uzytkownik::pobierzHaslo()
{
    return haslo;
}
