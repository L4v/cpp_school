#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "menjac.hpp"
#include "skoljka.hpp"

class Automobil{
public:
    Skoljka skoljka;
    Menjac menjac;

    Automobil():skoljka(), menjac(){
    }
    Automobil(int brzina, tip_menjaca tip, boja_skoljke boja):menjac(brzina, tip), skoljka(boja){}
    Automobil(const Automobil &a):skoljka(a.skoljka), menjac(a.menjac){}

    bool setBrzina(int brzina){
        if(menjac.setBrzina(brzina))
            return true;
        return false;
    }

    void setBoja(boja_skoljke boja){ skoljka.setBoja(boja); }

    void setTipMenjaca(tip_menjaca tip){menjac.setTip(tip);}

    int getBrzina()const{return menjac.getBrzina();}

    tip_menjaca getTipMenjaca()const{return menjac.getTip();}

    boja_skoljke getBoja()const{return skoljka.getBoja();}


};

#endif // AUTOMOBIL_HPP_INCLUDED
