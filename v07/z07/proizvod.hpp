#ifndef PROIZVOD_HPP_INCLUDED
#define PROIZVOD_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>

using namespace std;

class Proizvod{
protected:
    DinString naziv;
    int cena;
public:
    Proizvod(const DinString& ime, const int c):
        naziv(ime),
        cena(c){}

    DinString& getNaziv() { return naziv; }
    int getCena() const { return cena; }

    virtual void izracunajPopust() = 0;
    virtual void ispisi()const{
        cout << "NAZIV: " << naziv << endl << "CENA: " << cena << endl;
    }
};

#endif // PROIZVOD_HPP_INCLUDED
