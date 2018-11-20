#include "student.hpp"

Student::Student() : Osoba(), brojIndeksa(123){}
Student::Student(const DinString& ime, const DinString& prezime) : Osoba(ime, prezime){}
Student::Student(const Osoba& os, int ind) : Osoba(os), brojIndeksa(ind){}
Student::Student(const Student& st) : Osoba(st), brojIndeksa(st.brojIndeksa){}

void Student::predstaviSe() const{
    Osoba::predstaviSe();
    std::cout << "INDES: " << this->brojIndeksa << std::endl;;
}
