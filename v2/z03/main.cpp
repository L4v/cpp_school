#include <iostream>
#include "machine.hpp"

using namespace std;

int meni(){
    int n;
    cout << "1 - metodaX" << endl;
    cout << "2 - metodaY" << endl;
    cout << "3 - metodaZ" << endl;
    cout << "4 - metodaW" << endl;
    cout << "5 - info" << endl;
    cout << "0 - quit" << endl;
    cin >> n;
    return n;
}

void printInfo(const Machine &m){
    cout << "Machine: ";
    switch(m.getCurrentState()){
    case 1:
        cout << "sA ";
        break;
    case 2:
        cout << "sB ";
        break;
    case 3:
        cout << "sC ";
        break;
    case 4:
        cout << "sD ";
        break;
    default:
        cout << "error" << endl;
    }
    cout << m.getValue() << endl;
}

int main()
{
    Machine m;
    int n;
    do{
        n = meni();
        switch(n){
        case 1:
            if(m.metodaX())
                cout << "uspesno" << endl;
            else
                cout << "neuspesno" << endl;
            break;
        case 2:
            if(m.metodaY())
                cout << "uspesno" << endl;
            else
                cout << "neuspesno" << endl;
            break;
        case 3:
            if(m.metodaZ())
                cout << "uspesno" << endl;
            else
                cout << "neuspesno" << endl;
            break;
        case 4:
            if(m.metodaW())
                cout << "uspesno" << endl;
            else
                cout << "neuspesno" << endl;
            break;
        case 5:
            printInfo(m);
            break;
        default:
            cout << "invalid" << endl;
            break;
        }

        printInfo(m);

    }while(n != 0);
    return 0;
}
