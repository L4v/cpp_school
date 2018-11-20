#ifndef ELIPSA_HPP_INCLUDED
#define ELIPSA_HPP_INCLUDED
#define PI 3.14

#include "figura.hpp"
#include <cmath>

class Elipsa : public Figura{
public:
    Elipsa() : x(1), y(2){}
    Elipsa(double x, double y): x(x), y(y){}
    Elipsa(const Elipsa &el){
        x = el.x;
        y = el.y;
    }

    double getO()const{ return PI * (3*(x + y) - sqrt((3*x+y) * (x + 3*y)));}
    double getP()const{ return PI * x*y;}
protected:
    double x, y;
};

#endif // ELIPSA_HPP_INCLUDED
