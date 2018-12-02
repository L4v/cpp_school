#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED
#include "predmet.hpp"

class Student{
private:
    Predmet p1, p2;
public:
    Student(const Predmet& p1, const Predmet& p2):
        p1(p1),
        p2(p2){}

    void ispis() const{
        int maxPoeni;
        std::cout << "PREDMET 1:" << std::endl;
        p1.ispis();
        std::cout << "PREDMET 2:" << std::endl;
        p2.ispis();

        maxPoeni = (p1.getUkupniPoeni() > p2.getUkupniPoeni()) ? p1.getUkupniPoeni() : p2.getUkupniPoeni();
        std::cout << "MAX POENI NA: " << (maxPoeni == p1.getUkupniPoeni() ? p1.getNaziv() : p2.getNaziv()) << std::endl;

    }
};

#endif // STUDENT_HPP_INCLUDED
