#include <iostream>

using namespace std;

int cena(int brKarata, int cena = 50){
    int suma = 0;
    for(int i = 0; i < brKarata; i ++)
        suma += cena;
    return suma;
}

int main()
{
    int n, c = 0;
    cout << "UNETI n" << endl;
    cin >> n;
    cout << "UNETI CENU [D-DEFAULT]" << endl;

    if(cin >> c)
        cout << cena(n, c) << endl;
    else
        cout << cena(n) << endl;
    return 0;
}
