#include <iostream>

using namespace std;

enum dijag{
    IZNAD,
    ISPOD,
    DIJAGONALA
};

void unos(int * niz, int n){
    cout << "UNETI NIZ" << endl;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            cin >> niz[i * n + j];
        }
    }
}

void ispis(int * niz, int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++)
            cout << niz[i * n + j];
        cout << endl;
    }
}

int suma(int * niz, int n, dijag di){
    int sum = 0;
    switch(di){
    case IZNAD:
        for(int i = 0; i < n; i ++){
            for(int j = i + 1; j < n; j ++){
                sum += niz[i  * n + j];
            }
        }
        break;

    case ISPOD:
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < i; j ++){
                sum += niz[i * n + j];
            }
        }
        break;

    case DIJAGONALA:
        for(int i = 0; i < n; i ++){
            sum += niz[i * n + i];
        }

    }
    return sum;
}

int main()
{
    int n;
    cout << "BROJ CLANOVA" << endl;
    do{
        cin >> n;
    }while(n <= 0);

    int * niz = new int[n * n];

    unos(niz, n);
    ispis(niz, n);
    cout << suma(niz, n, DIJAGONALA) << endl;

    delete [] niz;
    return 0;
}
