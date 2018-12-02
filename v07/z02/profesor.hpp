#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED

#include "osoba.hpp"

class Profesor : public Osoba{
public:
    Profesor() : Osoba("PROFESOR", "PROF"), predmet("nesto"){}
    Profesor(const DinString& ime, const DinString& prezime, const DinString& predmet) : Osoba(ime, prezime), predmet(predmet){}
    Profesor(const Profesor& pr) : Osoba(pr.ime, pr.prezime), predmet(pr.predmet){}

    void ispis(){
        std::cout << "IME:" << ime << "\nPREZIME:"<<prezime<<"\nPREDMET:"<<predmet<<std::endl;
    }
private:
    DinString predmet;


};

#endif // PROFESOR_HPP_INCLUDED
