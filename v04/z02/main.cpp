#include <iostream>
#include "phdstudent.hpp"

using namespace std;

int main()
{
    Osoba o1, o2("Marko", "Markovic"), o3(o2);
    Student s1, s2("Mirko", "Mirkovic", 321), s3(s2), s4(o3, 432);
    PhDStudent p1, p2("Mikri", "Mikrovic", 123, 9), p3(p2), p4(o3, 890, 8), p5(s4, 10);

    o1.predstaviSe();
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
    p5.predstaviSe();

    return 0;
}
