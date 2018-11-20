#include <iostream>
#include "rerna.hpp"

using namespace std;

void ispisiRernu(const Rerna &r){
    cout << "Rerna: ";
    switch(r.getTrenutnoStanje()){
    case UKLJUCENA:
        cout << "UKLJUCENA" << endl;
        break;
    case ISKLJUCENA:
        cout << "ISKLJUCENA" << endl;
        break;
    case POKVARENA:
        cout << "POKVARENA" << endl;
        break;
    default:
        cout << "UNDEFINED" << endl;
        break;
    }
    cout << r->getTemperatura() << endl;
}

int meni(){
    int n;
    cout << "1 - UKLJUCI RERNU" << endl;
    cout << "2 - ISKLJUCI RERNU" << endl;
    cout << "3 - POKVARI RERNU" << endl;
    cout << "4 - POPRAVI RERNU" << endl;
    cout << "5 - POJACAJ TEMP" << endl;
    cout << "6 - SMANJI TEMP" << endl;
    cout << "7 - ISPISI RERNU" << endl;
    cout << "0 - EXIT" << endl;
    cin >> n;
}

int main()
{

    Rerna r;

    do{
        int n = meni();
        switch(n){
        case 1:
            if(r->ukljuci())
                cout << "USPESNO" << endl;
            else
                cout << "NEUSPESNO" << endl;
            break;
        case 2:
            if(r->iskljuci())
                cout << "USPESNO" << endl;
            else
                cout << "NEUSPESNO" << endl;
            break;
        case 3:
            if(r->pokvari())
                cout << "USPESNO" << endl;
            else
                cout << "NEUSPESNO" << endl;
            break;
        case 4:
            if(r->popravi())
                cout << "USPESNO" << endl;
            else
                cout << "NEUSPESNO" << endl;
            break;
        case 5:
            if(r->pojacajTemperaturu())
                cout << "USPESNO" << endl;
            else
                cout << "NEUSPESNO" << endl;
            break;
        case 6:
            if(r->smanjiTemperaturu())
                cout << "USPESNO" << endl;
            else
                cout << "NEUSPESNO" << endl;
            break;
        case 7:
            ispisiRernu(r);
            break;
        default:
            cout << "INVALID" << endl;
            break;
        }
    }while(n);
    return 0;
}
