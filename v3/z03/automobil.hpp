#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "menjac.hpp"
#include "skoljka.hpp"

enum stanje{
    POKVAREN,
    UGASEN,
    VOZNJA
};

class Automobil{
public:
    Menjac menjac;
    Skoljka skoljka;
    Automobil():menjac(), skoljka(){
        _trenutnoStanje = UGASEN;
        menjac.setBrzina(0);
    }
    Automobil(int brzina, stanje s, boja_skoljke boja, tip_menjaca tip):menjac(brzina, tip), skoljka(boja){
        _trenutnoStanje = s;
    }
    Automobil(const Automobil &a):menjac(a.menjac), skoljka(a.skoljka){}

    bool upali(){
        if(_trenutnoStanje == UGASEN){
            _trenutnoStanje = VOZNJA;
            return true;
        }
        return false;
    }
    bool ugasi(){
        if(_trenutnoStanje == VOZNJA){
            menjac.setBrzina(0);
            _trenutnoStanje = UGASEN;
            return true;
        }
        return false;
    }
    bool pokvari(){
        if(_trenutnoStanje != POKVAREN){
            menjac.setBrzina(0);
            _trenutnoStanje = POKVAREN;
            return true;
        }
        return false;
    }
    bool popravi(){
        if(_trenutnoStanje == POKVAREN){
            _trenutnoStanje = UGASEN;
            return true;
        }
        return false;
    }
    bool povecajBrzinu(int novaBrzina){
        if(_trenutnoStanje == VOZNJA){
            if(menjac.setBrzina(novaBrzina));
                return true;
            return false;
        }
        return false;
    }
    bool smanjiBrzinu(){
        if(_trenutnoStanje == VOZNJA){
            if(menjac.setBrzina(menjac.getBrzina() - 1)){
                return true;
            }
            return false;
        }
        return false;
    }

    stanje getStanje()const{
        return _trenutnoStanje;
    }

private:
    stanje _trenutnoStanje;
friend void ispisiAuto(const Automobil &a);
};

#endif // AUTOMOBIL_HPP_INCLUDED
