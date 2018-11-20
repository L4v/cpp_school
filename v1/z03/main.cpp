#include <iostream>
#include <cmath>

using namespace std;

double suma(int n){
    double rez = 0;
    for(int i = 1; i <= n; i ++)
        rez += sqrt(i);
    rez = (int)(rez * 100.0)/100.0;
    return rez;
}

int main()
{
    int n;
    cout << "UNETI n" << endl;
    cin >> n;
    cout << suma(n) << endl;
    return 0;
}
