#ifndef OBLIK_HPP_INCLUDED
#define OBLIK_HPP_INCLUDED
#include "elipsa.hpp"
#include "pravougaonik.hpp"
#include <iostream>

class Oblik{

public:
    Oblik():pravougaonik(), elipsa(){}
    Oblik(double a, double b, double x, double y) : pravougaonik(a, b), elipsa(x, y){}
    Oblik(const Oblik &ob) : pravougaonik(ob.pravougaonik), elipsa(ob.elipsa){}


    double getP()const{ std::cout<<"KRUG" << elipsa.getP() << std::endl;return pravougaonik.getP() - elipsa.getP();}
    double getO()const{ return pravougaonik.getO() + elipsa.getO();}
private:
    Pravougaonik pravougaonik;
    Elipsa elipsa;
};

#endif // OBLIK_HPP_INCLUDED
