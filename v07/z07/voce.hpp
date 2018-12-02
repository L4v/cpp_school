#ifndef VOCE_HPP_INCLUDED
#define VOCE_HPP_INCLUDED
#include "proizvod.hpp"

class Voce : public Proizvod{
private:
    DinString zemljaPorekla;
    int rokTrajanja;
public:
    Voce(const DinString& ime, const int c, const DinString& zemlja, const int rok) :
        Proizvod(ime, c),
        zemljaPorekla(zemlja),
        rokTrajanja(rok){}

    void izracunajPopust() {
        double popust;
        if(rokTrajanja  > 5)
            popust *= 0.33;
        else if(rokTrajanja >= 1)
            popust *= 0.66;
        else if(rokTrajanja == 0)
            popust = 0;

        this->cena -= popust*cena;
    }

    void ispisi() const{
        cout << "IME: " << this->naziv << "ZEMLJA POREKLA VOCA: " << this->zemljaPorekla << "ROK: " << this->rokTrajanja << "CENA: " << this->cena << endl;
    }

};

#endif // VOCE_HPP_INCLUDED
