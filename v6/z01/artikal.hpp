#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED

#include "dinstring.hpp"
//#include <iostream>

using namespace std;

class Artikal{
private:
    DinString naziv;
    double cena;
public:
    static int brInst;

    Artikal(const char naziv[], const double cena):naziv(naziv),cena(cena){brInst++;}
    Artikal(const DinString& naziv, const double cena):naziv(naziv),cena(cena){brInst++;}

    Artikal(const Artikal& a):naziv(a.naziv),cena(a.cena){brInst++;}

    ~Artikal(){
        brInst -- ;
    }

    DinString getNaziv() const {return naziv;}
    double getCena() const {return cena;}

friend ostream& operator<<(ostream& o, Artikal& a){
        o << "NAZIV: " << a.getNaziv() << "\nCENA: " << a.getCena() << endl;
        return o;
    }

};

#endif // ARTIKAL_HPP_INCLUDED
