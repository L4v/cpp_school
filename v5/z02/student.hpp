#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED
#include "osoba.hpp"

class Student : public Osoba{
public:
    /* Student
    * Prazan konstruktor
    */
    Student();

    /* Student
    * Parametarski konstruktor
    */
    Student(const DinString&, const DinString&);

    /* Student
    * Konstruktor kopije
    */
    Student(const Osoba&, int);

    /* Student
    * Konstruktor kopije
    */
    Student(const Student&);

    void predstaviSe() const;

private:
    int brojIndeksa;

};

#endif // STUDENT_HPP_INCLUDED
