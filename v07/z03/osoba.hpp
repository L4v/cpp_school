#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include "dinstring.hpp"
#include <iostream>
using namespace std;

class Osoba{
protected:
    DinString ime, prezime;
public:
    Osoba(){}
    Osoba(const char ime[], const char prezime[]) : ime(ime), prezime(prezime){}
    Osoba(const DinString& ime, const DinString& prezime) : ime(ime), prezime(prezime){}
    Osoba(const Osoba& o) : ime(o.ime), prezime(o.prezime){}

    virtual void ispis(){
        cout << "IME:" << ime << "\nPREZIME:"<<prezime << endl;
    }

};

#endif // OSOBA_HPP_INCLUDED
