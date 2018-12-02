#ifndef ELIPSA_HPP_INCLUDED
#define ELIPSA_HPP_INCLUDED
#include "figura.hpp"

class Elipsa : public Figura{
protected:
    double a, b;
public:
    Elipsa() : a(1), b(2){}
    Elipsa(double a, double b) : a(a), b (b){}
    Elipsa(const Elipsa& e) : a(e.a), b(e.b){}

    double getA() const{return a;}
    double getB() const{return b;}

    double getObim() const{ return 3.14 * (3 * (a + b) - sqrt((3*a + b) * (a + 3*b)));}
    double getPovrsina() const { return 3.14 * a * b; }

};

#endif // ELIPSA_HPP_INCLUDED
