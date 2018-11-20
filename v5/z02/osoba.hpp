#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>
#include "dinstring.hpp"

class Osoba{
public:
    /* Osoba
    * Prazan konstruktor
    */
    Osoba();

    /* Osoba
    * Parametarski konstruktor
    */
    Osoba(const char*, const char*);

    /* Osoba
    * Parametarski konstruktor
    */
    Osoba(const DinString&, const DinString&);

    /* Osoba
    * Konstruktor kopije
    */
    Osoba(const Osoba&);

    /* void predstaviSe
    * Ispisuje ime i prezime osobe
    */
    void predstaviSe() const;

protected:
    DinString ime, prezime;


};

#endif // OSOBA_HPP_INCLUDED
