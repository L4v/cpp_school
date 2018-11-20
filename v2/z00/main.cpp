#include <iostream>
#include "osoba.hpp"

using namespace std;

int main()
{
    Osoba o1;
    o1.ispisDatum();

    Osoba o2(2, 2, 2002);
    o2.ispisDatum();

    int a,b ,c;
    cin >> a >> b >> c;
    Osoba o3(a, b, c);
    o3.ispisDatum();

    Osoba o4(o3);
    o4.ispisDatum();
    return 0;
}
