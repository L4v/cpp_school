#include <iostream>

#include "automobil.hpp"

using namespace std;

void ispisiAuto(const Automobil &a){
    cout << "AUTO: " << endl << "\tSTANJE:";
    switch(a.getStanje()){
    case UGASEN:
        cout << "UGASEN" << endl;
        break;
    case VOZNJA:
        cout << "U VOZNJI" << endl;
        break;
    case POKVAREN:
        cout << "POKVAREN" << endl;
        break;
    default:
        cout << "GRESKA U ISPISU STANJA" << endl;
        break;
    }
    cout << "\tBOJA:";
    switch(a.skoljka.getBoja()){
    case crvena:
        cout << "CRVENA" << endl;
        break;
    case plava:
        cout << "PLAVA" << endl;
        break;
    case zelena:
        cout << "ZELENA" << endl;
        break;
    default:
        cout << "GRESKA U ISPISU BOJE" << endl;
        break;
    }
    cout << "\tBRZINA:" << a.menjac.getBrzina() << endl;
    cout << "\tMENJAC:" << (a.menjac.getTip() == automatik ? "AUTOMATIK" : "MANUELNI") << endl;

}

int main()
{
    Automobil a;
    Automobil b = Automobil(4, POKVAREN, zelena, automatik);
    Automobil c = Automobil(b);

    ispisiAuto(a);
    ispisiAuto(b);
    ispisiAuto(c);
    return 0;
}
