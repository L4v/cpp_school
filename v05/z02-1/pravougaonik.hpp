#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED
#include "figura.hpp"

class Pravougaonik : public Figura{
protected:
    double a, b;
public:
    Pravougaonik() : a(1), b(2){}
    Pravougaonik(double a , double b) : a(a), b(b){}
    Pravougaonik(const Pravougaonik& p) : a(p.a), b(p.b){}

    double getA() const{ return a; }
    double getB() const{ return b; }

    double getObim() const{ return 2*a + 2*b; }
    double getPovrsina() const{ return a*b; }

};

#endif // PRAVOUGAONIK_HPP_INCLUDED
