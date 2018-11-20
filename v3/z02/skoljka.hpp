#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum boja_skoljke{
    crvena,
    zelena,
    plava
};

class Skoljka{
public:
    Skoljka(){
        _trenutnaBoja = plava;
    }

    Skoljka(boja_skoljke boja){
        _trenutnaBoja = boja;
    }

    Skoljka(const Skoljka &s){
        _trenutnaBoja = s.getBoja();
    }

    void setBoja(boja_skoljke boja){
        _trenutnaBoja = boja;
    }

    boja_skoljke getBoja()const{return _trenutnaBoja; }

private:
    boja_skoljke _trenutnaBoja;

};

#endif // SKOLJKA_HPP_INCLUDED
