#include "osoba.hpp"

Osoba::Osoba(){
    ime = "Default";
    prezime = "Defaultic";
}

Osoba::Osoba(const char* ime, const char* prezime){
    ime = ime;
    prezime = prezime;
}

Osoba::Osoba(const DinString& ime, const DinString& prezime){
    this->ime = ime;
    this->prezime = prezime;
}

Osoba::Osoba(const Osoba& osoba){
    this->ime = osoba.ime;
    this->prezime = osoba.prezime;
}

void Osoba::predstaviSe() const{
    std::cout << "IME: " << ime << std::endl << "PREZIME: " << prezime << std::endl;
}
