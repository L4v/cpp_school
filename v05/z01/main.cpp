#include <iostream>
#include "phdstudent.hpp"

using namespace std;

    void predstavljanje1(Osoba o){
        o.predstaviSe();
    }

    void predstavljanje2(const Osoba& o){
        o.predstaviSe();
    }

int main()
{
    Osoba o1, o2("Marko", "Markovic"), o3(o2);
    Student s1, s2("Mirko", "Mirkovic", 321), s3(s2), s4(o3, 432);
    PhDStudent p1, p2("Mikri", "Mikrovic", 123, 9), p3(p2), p4(o3, 890, 8), p5(s4, 10);

    /*o1.predstaviSe();
    o2.predstaviSe();
    o3.predstaviSe();
    s1.predstaviSe();
    s2.predstaviSe();
    s3.predstaviSe();
    s4.predstaviSe();
    p1.predstaviSe();
    p2.predstaviSe();
    p3.predstaviSe();
    p4.predstaviSe();
    p5.predstaviSe();*/

    predstavljanje1(o1);
    predstavljanje2(o1);
    predstavljanje1(s1);
    predstavljanje2(s1);
    predstavljanje1(p1);
    predstavljanje2(p1);

    return 0;
}
