#include <iostream>
#include <stdlib.h>

using namespace std;

enum vrsta{
    RASTUCE,
    OPADAJUCE
};

void unosNiza(int * niz, int n){
        cout << "Uneti clanove niza" << endl;
    for(int i = 0; i < n; i ++)
        cin >> niz[i];
}

void sortNiza(int * niz, int n, vrsta vr){
    int x1, x2;
    if(vr == RASTUCE)
        for(int i = 0; i < n - 1; i ++)
            for(int j = 0; j < n - i - 1; j ++){
                if(niz[j] > niz[j + 1]){
                    x1 = niz[j];
                    niz[j] = niz[j + 1];
                    niz[j + 1] = x1;
                }
            }

    else
        for(int i = 0; i < n - 1; i ++)
            for(int j = 0; j < n - i - 1; j ++){
                if(niz[j] < niz[j + 1]){
                    x1 = niz[j];
                    niz[j] = niz[j + 1];
                    niz[j + 1] = x1;
                }
            }
}

void ispisNiz(int * niz, int n){
    for(int i = 0; i < n; i ++)
        cout << niz[i] << ' ';
}

int main()
{
    int n;
    cout << "Uneti broj clanova niza" << endl;
    cin >> n;
    int * niz = new int[n];

    unosNiza(niz, n);
    sortNiza(niz, n, RASTUCE);
    ispisNiz(niz, n);

    delete[] niz;
    return 0;
}
