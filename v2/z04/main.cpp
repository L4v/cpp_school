#include <iostream>
#include "televizor.hpp"

using namespace std;

void ispis(const Televizor &t){
    cout << "Televizor: ";
    switch(t.getStanje()){
    case 0:
        cout << "UKLJUCEN ";
        break;
    case 1:
        cout << "ISKLJUCEN ";
        break;
    case 2:
        cout << "POKVAREN ";
        break;
    default:
        cout << "GRESKA";

    }
    cout << "KANAL:" << t.getKanal() << " ZVUK:" << t.getZvuk() << endl;
}

int main()
{
    Televizor t;
    ispis(t);
    return 0;
}
