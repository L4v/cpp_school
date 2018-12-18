#ifndef OBLIK_HPP_INCLUDED
#define OBLIK_HPP_INCLUDED
#include "elipsa.hpp"
#include "pravougaonik.hpp"
#include <iostream>

class Oblik{
protected:
    Pravougaonik A;
    Elipsa B;
public:
    Oblik() : A(2, 3), B(1, 2){}
    Oblik(double a, double b, double c, double d) : A(a, b), B(c, d){}
    Oblik(const Oblik& ob) : A(ob.A), B(ob.B){}

    double getObim() const{ return A.getObim() + B.getObim();}
    double getPovrsina() const { return A.getPovrsina() - B.getPovrsina();}

    void test(){
        std::cout<<A.getA() << std::endl << A.getB() << std::endl;
    }

};

#endif // OBLIK_HPP_INCLUDED
