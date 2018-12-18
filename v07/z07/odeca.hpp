#ifndef ODECA_HPP_INCLUDED
#define ODECA_HPP_INCLUDED
#include "proizvod.hpp"

enum Velicina{
    XS = 0,
    S = 1,
    M = 2,
    L = 3,
    XL = 4
};

enum Tip{
    MAJICA = 0,
    PANTALONE = 1
};

class Odeca : public Proizvod{
private:
    Velicina velicina;
    Tip tip;
public:
    static int velike;

    Odeca(const DinString& ime, const int c, const Velicina v, const Tip t):
        Proizvod(ime, c),
        velicina(v),
        tip(t){
            if(v == L || v == XL)
                velike ++;
        }

    ~Odeca(){
        if(velicina == L || velicina == XL)
            velike --;
    }

    void izracunajPopust() {
        double popust;
        if(this->tip == MAJICA){
            if(this->velicina == XS)
                popust = 0.66;
            else
                popust = 0.5;
            }else{
                popust = 0.33;
            }
        this->cena -= popust*cena;
    }

    int getBrojVelikih() const { return velike; }

    void ispisi() const{
        Proizvod::ispisi();
        cout << "TIP: " << (tip == MAJICA ? " MAJICA " : " PANTALONE ") << endl<<"VELICINA: " ;
        switch(velicina){
        case XS:
            cout << "XS ";
            break;
        case S:
            cout << "S ";
            break;
        case M:
            cout << "M ";
            break;
        case L:
            cout << "L ";
            break;
        case XL:
            cout << "XL ";
            break;
        default:
            cout << "GRESKA U ISPISU ODECE" << endl;
        }
        cout << endl;
    }

};

#endif // ODECA_HPP_INCLUDED
