#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "osoba.hpp"

class Student : public Osoba{
public:
    Student() : Osoba("Student", "STUD"), indeks("123"){}
    Student(const DinString& ime, const DinString& prezime, const DinString& indeks) : Osoba(ime, prezime), indeks(indeks){}
    Student(const Student& st) : Osoba(ime, prezime), indeks(st.indeks){}

    void ispis(){
        std::cout << "IME:" << ime << "\nPREZIME:"<<prezime<<"\nINDEKS:"<<indeks<<std::endl;
    }
private:
    DinString indeks;

};

#endif // STUDENT_HPP_INCLUDED
