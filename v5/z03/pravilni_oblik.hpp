#ifndef PRAVILNI_OBLIK_HPP_INCLUDED
#define PRAVILNI_OBLIK_HPP_INCLUDED
#include "oblik.hpp"
#include "kvadrat.hpp"
#include "krug.hpp"


class Pravilni_Oblik : public Oblik{
 public:
     Pravilni_Oblik() : Oblik(1, 1, 1, 1){}
     Pravilni_Oblik(double x, double a) : Oblik(a, a, x, x){}
     Pravilni_Oblik(Pravilni_Oblik& po) : Oblik(po){}
 private:
     Kvadrat kvadrat;
     Krug krug;

};

#endif // PRAVILNI_OBLIK_HPP_INCLUDED
