#ifndef JKSTROUGAO_HPP_INCLUDED
#define JKSTROUGAO_HPP_INCLUDED
#include "jktrougao.hpp"

class JKSTrougao : public JKTrougao {
public:
    JKSTrougao() : JKTrougao(1, 1){}
    JKSTrougao(int a) : JKTrougao(a, a){}
};

#endif // JKSTROUGAO_HPP_INCLUDED
