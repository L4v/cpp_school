#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>

using namespace std;

class Osoba{
protected:
    DinString ime, prezime;
public:
    Osoba() : ime("Petar"), prezime("Petrovic"){}
    Osoba(const char* ime, const char* prezime) : ime(ime), prezime(prezime){}
    Osoba(const DinString& ime, const DinString& prezime) : ime(ime), prezime(prezime){}
    Osoba(const Osoba& os) : ime(os.ime), prezime(os.prezime){}

    void predstaviSe(){
        cout << "Moje ime je " << ime << " " << prezime << endl;
    }
};

#endif // OSOBA_HPP_INCLUDED
