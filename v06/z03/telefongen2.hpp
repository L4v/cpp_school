#ifndef TELEFONGEN2_HPP_INCLUDED
#define TELEFONGEN2_HPP_INCLUDED
#include "telefon.hpp"
#include "kamera.hpp"

class TelefonGen2 : public Telefon{
protected:
    Kamera k;
public:
    TelefonGen2() : Telefon(), k(){}
    TelefonGen2(const DinString& br, const Kamera& k) : Telefon(br),
        k(k){}

    bool slikajSlik(){
        return k.slikaj();
    }
};

#endif // TELEFONGEN2_HPP_INCLUDED
