#ifndef PHDSTUDENT_HPP_INCLUDED
#define PHDSTUDENT_HPP_INCLUDED
#include "student.hpp"

class PhDStudent : public Student{
private:
    double prosecnaOcena;
public:
    PhDStudent() : Student(), prosecnaOcena(10){}

    PhDStudent(const char* ime, const char* prezime, int indeks, double ocena) :
        Student(ime, prezime, indeks),
        prosecnaOcena(ocena){}

    PhDStudent(const DinString& ime, const DinString& prezime, int indeks, double ocena) :
        Student(ime, prezime, indeks),
        prosecnaOcena(ocena){}

    PhDStudent(const Osoba& o, int indeks, double ocena):
        Student(o, indeks),
        prosecnaOcena(ocena){}

    PhDStudent(const Student& st, double ocena):
        Student(st),
        prosecnaOcena(ocena){}

    PhDStudent(const PhDStudent& ph) :
        Student((Student)ph),
        prosecnaOcena(ph.prosecnaOcena){}

    void predstaviSe() const{
        Student::predstaviSe();
        cout << "Prosecna ocena: " << prosecnaOcena << endl;
    }

};

#endif // PHDSTUDENT_HPP_INCLUDED
