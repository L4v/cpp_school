#ifndef PRAVILANOBLIK_HPP_INCLUDED
#define PRAVILANOBLIK_HPP_INCLUDED
#include "oblik.hpp"

class PravilanOblik : public Oblik{
public:
    PravilanOblik() : Oblik(2, 2, 1, 1){}
    PravilanOblik(double a, double b) : Oblik(a, a, b, b){}
    PravilanOblik(const PravilanOblik& ob) : Oblik((Oblik)ob){}

    double getObim() const{ return A.getObim() + B.getObim();}
    double getPovrsina() const { return A.getPovrsina() - B.getPovrsina();}

};

#endif // PRAVILANOBLIK_HPP_INCLUDED
