#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED
#include "elipsa.hpp"

class Krug : public Elipsa{
public:
    Krug() : Elipsa(1, 1){}
    Krug(double a) : Elipsa(a, a){}
    Krug(const Krug& k) : Elipsa((Elipsa)k){}
};

#endif // KRUG_HPP_INCLUDED
