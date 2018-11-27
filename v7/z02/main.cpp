#include <iostream>
#include "profesor.hpp"
#include "student.hpp"
#include "ucionica.hpp"

using namespace std;

int main()
{
    Student st1, st2("Marko", "Maric", "456"), st3(st2);
    Profesor pr1, pr2("Mirko", "Miric", "456"), pr3(pr2);
    Ucionica uc(4, "Lab20i");
    st1.ispis();
    Osoba o;
    o.ispis();

    if(!uc.dodajNovu(st1))
        cout << "NEUSPELO" << endl;
    if(!uc.dodajNovu(st2))
        cout << "NEUSPELO" << endl;
    if(!uc.dodajNovu(st3))
        cout << "NEUSPELO" << endl;
    if(!uc.dodajNovu(pr1))
        cout << "NEUSPELO" << endl;
    if(!uc.dodajNovu(pr2))
        cout << "NEUSPELO" << endl;
    if(!uc.dodajNovu(pr3))
        cout << "NEUSPELO" << endl;

    return 0;
}
