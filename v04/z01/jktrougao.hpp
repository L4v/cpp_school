#ifndef JKTROUGAO_HPP_INCLUDED
#define JKTROUGAO_HPP_INCLUDED
#include "trougao.hpp"

class JKTrougao : public Trougao{
public:
    JKTrougao() : Trougao(2, 2, 1){}
    JKTrougao(int a, int b) : Trougao(a, a, b){}
};

#endif // JKTROUGAO_HPP_INCLUDED
