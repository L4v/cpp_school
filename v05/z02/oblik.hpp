#ifndef OBLIK_HPP_INCLUDED
#define OBLIK_HPP_INCLUDED
#include "krug.hpp"
#include "kvadrat.hpp"
#include <iostream>

class Oblik{
private:
    Kvadrat A;
    Krug B;
public:
    Oblik() : A(2), B(1){}
    Oblik(double a, double b) : A(a), B(b){}
    Oblik(const Oblik& ob) : A(ob.A), B(ob.B){}

    double getObim() const{ return A.getObim() + B.getObim();}
    double getPovrsina() const { return A.getPovrsina() - B.getPovrsina();}

    void test(){
        std::cout<<A.getA() << std::endl << B.getA() << std::endl;
    }

};

#endif // OBLIK_HPP_INCLUDED
