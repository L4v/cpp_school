#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED
#include "elipsa.hpp"

class Krug : public Elipsa{
public:
    Krug() : Elipsa(1, 1){}
    Krug(double x) : Elipsa(x, x){}
    Krug(const Krug &kr) : Elipsa(kr){}
};


#endif // KRUG_HPP_INCLUDED
