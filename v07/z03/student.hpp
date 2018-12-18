#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "osoba.hpp"

class Student : public Osoba{
private:
    DinString indeks;
public:
    Student() : Osoba("Student", "STUD"), indeks("123"){}
    Student(const char ime[], const char prezime[], const char indeks[]) : Osoba(ime, prezime), indeks(indeks){}
    Student(const DinString& ime, const DinString& prezime, const DinString& indeks) : Osoba(ime, prezime), indeks(indeks){}
    Student(const Student& st) : Osoba(st.ime, st.prezime), indeks(st.indeks){}

    void ispis(){
        Osoba::ispis();
        cout << "INDEKS:" << indeks;
    }

};

#endif // STUDENT_HPP_INCLUDED
