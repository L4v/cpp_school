#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED
#include "dinstring.hpp"
#include "artikal.hpp"
#include <iostream>

class Lek : public Artikal{
private:
    long _jkl;
    DinString _naziv;
    double _jedinicnaCena;
    int _kolicina;
public:
    Lek() :
             _jkl(30),
           _naziv("Magic"),
           _jedinicnaCena(42),
           _kolicina(1000){}
    Lek(long jkl, const char naziv[], double jedinicnaCena, int kolicina):
                                                                               _jkl(jkl),
                                                                               _naziv(naziv),
                                                                               _jedinicnaCena(jedinicnaCena),
                                                                               _kolicina(kolicina){}
    Lek(long jkl, const DinString naziv, double jedinicnaCena, int kolicina):
                                                                               _jkl(jkl),
                                                                               _naziv(naziv),
                                                                               _jedinicnaCena(jedinicnaCena),
                                                                               _kolicina(kolicina){}
    Lek(const Lek &lek):
                         _jkl(lek._jkl),
                         _naziv(lek._naziv),
                         _jedinicnaCena(lek._jedinicnaCena),
                         _kolicina(lek._kolicina){}

    double vrednost(){
        return _kolicina * _jedinicnaCena;
    }

    friend ostream& operator<<(ostream& os, Lek& lek){
    os << "JKL:" << lek._jkl << std::endl << "NAZIV:" << lek._naziv << std::endl << "JEDINICNA CENA:" << lek._jedinicnaCena << std::endl << "KOLICINA:" << lek._kolicina << std::endl;
    return os;
}

};

#endif // LEK_HPP_INCLUDED
