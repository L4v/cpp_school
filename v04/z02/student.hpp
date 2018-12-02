#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED
#include "osoba.hpp"

class Student : public Osoba{
protected:
    int brIndeksa;
public:
    Student() : Osoba(), brIndeksa(123){}
    Student(const char* ime, const char* prezime, int brI) : Osoba(ime, prezime), brIndeksa(brI){}
    Student(const DinString& ime, const DinString& prezime, int brI) : Osoba(ime, prezime), brIndeksa(brI){}
    Student(const Osoba& os, int brIndeksa) : Osoba(os), brIndeksa(brIndeksa){}
    Student(const Student& st) : Osoba((Osoba)st), brIndeksa(st.brIndeksa){}

    void predstaviSe(){
        Osoba::predstaviSe();
        cout << "Indeks: " << brIndeksa << endl;
    }

};

#endif // STUDENT_HPP_INCLUDED
