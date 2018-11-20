#include "artikal.hpp"


Artikal::Artikal(const char n[], const double c) : naziv(n), cena(c){
    brojObjekata++;
}

Artikal::Artikal(const DinString& n, const double c) : naziv(n), cena(c){
    brojObjekata++;
}

Artikal::Artikal(const Artikal& a) : naziv(a.naziv), cena(a.cena){
    brojObjekata++;
}

Artikal::~Artikal(){
    brojObjekata--;
}

DinString Artikal::getNaziv() const{
    return naziv;
}

double Artikal::getCena() const{
    return cena;
}

int Artikal::getBrojObjekata() const {
    return brojObjekata;
}










ostream& operator<<(ostream& os, const Artikal& a){
    os << "--------- ARTIKAL ------" << endl;
    os << setw(10)<<"NAZIV: " << a.naziv << endl;
    os << setw(10)<<"CENA: " << a.cena << endl;
    os << setw(10)<<"INSTANCI: " << a.brojObjekata << endl;
    os << "------------------------" << endl << endl;

    return os;
}
