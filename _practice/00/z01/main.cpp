#include <iostream>
#include "artikal.hpp"

using namespace std;
int Artikal::_instance = 0;

int main()
{
    Artikal a1("DEBIL", 3), a(a1);
    cout << Artikal::_instance;
    {
        Artikal a2("KONJINA", 4);
        cout << Artikal::_instance;
    }
    cout << Artikal::_instance;
    return 0;
}
