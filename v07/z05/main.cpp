#include <iostream>
#include "student.hpp"

using namespace std;

int main()
{
    Kolokvijum k1, k2("1"),k3("2"), k4("3"),k5("4");
    Predmet p1, p2("MISS"), p3(p2), p4("LPRS");

    p4.dodajTest(k1);
    p4.dodajTest(k2);
    p4.dodajTest(k3);
    p2.dodajTest(k4);
    p2.dodajTest(k5);
    Student s(p4, p2);

    s.ispis();
    //k2.ispis();
    //p2.ispis();

    return 0;
}
