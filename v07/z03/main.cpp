
#include "profesor.hpp"
#include "student.hpp"
#include "ucionica.hpp"


int main()
{
    Student st1, st2("Mirko", "Miric", "123"), st3(st2);
    Profesor pr1, pr2("Petar", "Peric", "MET"), pr3(pr2);
    Ucionica uc(100, "Lab20i");

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
    uc.ispis();

    return 0;
}
