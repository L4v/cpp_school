#include <iostream>
#include "artikal.hpp"

using namespace std;

    int Artikal::brInst = 0;

int main()
{

    Artikal a2 = Artikal("Drugi", 4.44);
    Artikal a3(a2);

    {
        Artikal a1 = Artikal("Prvi", 3.44);
        cout << a1;
    }
    cout << a2;
    cout << a3;

    cout << "BROJ ARTIKALA: " << Artikal::brInst << endl;
    return 0;
}
