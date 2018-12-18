#ifndef TROUGAO_HPP_INCLUDED
#define TROUGAO_HPP_INCLUDED
#include <cmath>

class Trougao{
protected:
    double a, b, c;
public:

    Trougao():a(3), b(4), c(5){}
    Trougao(int a, int b, int c) : a(a), b(b), c(c){}

    double getObim() const { return a + b + c;}
    double getPovrsina() const {
        double s = (a+b+c)/2;
        return sqrt(s*(s - a)*(s-b)*(s-c));
    }
    double getA(){return a;}
    double getB(){return b;}
    double getC(){return c;}
};

#endif // TROUGAO_HPP_INCLUDED
