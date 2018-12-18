#include <iostream>
#include "artikal.hpp"

using namespace std;

int Artikal::instance = 0;

int main()
{
    Artikal a1("prvi", 100), a2(a1);
    cout << a1 << a2 << endl;
    cout << "INSTANCE: " << Artikal::instance << endl;
    {
        Artikal test("test", 123);
        cout << "INSTANCE: " << Artikal::instance << endl;
    }

    cout << "INSTANCE: " << Artikal::instance << endl;
    return 0;
}
