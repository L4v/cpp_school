#include <iostream>
#include "automobil.hpp"


using namespace std;

void printAuto(const Automobil &a){
    switch(a.getBoja()){
    case zelena:
        cout << "ZELEN ";
        break;
    case plava:
        cout<< "PLAV ";
        break;
    case crvena:
        cout << "CRVEN ";
        break;
    default:
        cout << "GRESKA U BOJI" << endl;
        break;
    }
    cout << a.getBrzina();
    switch(a.getTipMenjaca()){
    case automatik:
        cout << " AUTOMATIK";
        break;
    case manuelni:
        cout << " MANUELNI";
        break;
    default:
        cout << "GRESKA U MENJACU" << endl;
    }
    cout << endl;
}

int main()
{
    Automobil a;
    Automobil b = Automobil(4, automatik, zelena);
    Automobil c = Automobil(b);

    printAuto(a);
    printAuto(b);
    printAuto(c);

    return 0;
}
