#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include "dinstring.hpp"
#include <iostream>

class Osoba{
public:
    Osoba(){}
    Osoba(const DinString& ime, const DinString& prezime) : ime(ime), prezime(prezime){}
    Osoba(const Osoba& o) : ime(o.ime), prezime(o.prezime){}

    virtual void ispis(){}
protected:
    DinString ime, prezime;

};

#endif // OSOBA_HPP_INCLUDED
