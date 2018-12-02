#ifndef KVADRAT_HPP_INCLUDED
#define KVADRAT_HPP_INCLUDED
#include "pravougaonik.hpp"

class Kvadrat : public Pravougaonik{
public:
    Kvadrat() : Pravougaonik(1 , 1){}
    Kvadrat(double a) : Pravougaonik(a ,a){}
    Kvadrat(const Kvadrat& k) : Pravougaonik((Pravougaonik) k){}

};

#endif // KVADRAT_HPP_INCLUDED
