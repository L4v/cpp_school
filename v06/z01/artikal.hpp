#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED
#include "dinstring.hpp"

class Artikal{
public: static int instance;
protected:
    DinString naziv;
    double cena;
public:
    Artikal(const char ime[], const double c) :
        naziv(ime),
        cena(c){ instance ++; }
    Artikal(const DinString& ime, const double c):
        naziv(ime),
        cena(c){ instance ++; }
    Artikal(const Artikal& a) :
        naziv(a.naziv),
        cena(a.cena){ instance ++; }

    ~Artikal(){ instance --; }

    friend ostream& operator<<(ostream& o, const Artikal& a){
        o << "NAZIV: " << a.naziv << " CENA: " << a.cena << "\n";

        return o;
    }
};

#endif // ARTIKAL_HPP_INCLUDED
