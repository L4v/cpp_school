#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED
#include "figura.hpp"

class Pravougaonik : public Figura{
public:
    Pravougaonik() : a(1), b(2){}
    Pravougaonik(double a, double b):a(a), b(b){}
    Pravougaonik(const Pravougaonik& pr){
        a = pr.a;
        b = pr.b;
    }

    double getA(){ return a; }
    double getB(){ return b; }
    double getO()const{ return 2 * a + 2 * b;}
    double getP()const{ return a * b;}
protected:
    double a, b;

};

#endif // PRAVOUGAONIK_HPP_INCLUDED
