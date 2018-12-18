#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>

class Artikal{
public:
    static int _instance;
protected:
    DinString _naziv;
    double _cena;
public:
    Artikal(const char* naziv, const double cena) :
        _naziv(naziv),
        _cena(cena){ _instance++;}
    Artikal (const DinString& naziv, const double cena) :
        _naziv(naziv),
        _cena(cena){_instance++;}
    Artikal(const Artikal& arsch) :
        _naziv(arsch._naziv),
        _cena(arsch._cena){_instance++;}

    ~Artikal(){
        _instance--;
    }

    friend ostream& operator<<(ostream& os, const Artikal& arsch) {
        os << "NAZIV: " << arsch._naziv << "\nCENA: " << arsch._cena << "\n";
        return os;
   }
};

#endif // ARTIKAL_HPP_INCLUDED
