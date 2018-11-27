#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED

#include "osoba.hpp"

class Profesor : public Osoba{
private:
    DinString predmet;
    int x;
public:
    Profesor() : Osoba("PROFESOR", "PROF"), predmet("nesto"){}
    Profesor(const char ime[], const char prezime[], const char predmet[]) : Osoba(ime, prezime), predmet(predmet){}
    Profesor(const DinString& ime, const DinString& prezime, const DinString& predmet) : Osoba(ime, prezime), predmet(predmet){}
    Profesor(const Profesor& pr) : Osoba(pr.ime, pr.prezime), predmet(pr.predmet){}

    void ispis(){
        Osoba::ispis();
        cout << "PREDMET:" << predmet << endl;
    }


};

#endif // PROFESOR_HPP_INCLUDED
