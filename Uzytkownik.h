#include <iostream>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;
public:
    int ustawId(int noweId);
    string ustawLogin(string nowyLogin);
    string ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};
