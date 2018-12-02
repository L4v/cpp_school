#include <iostream>
#include "trezor.hpp"
#include "dijamant.hpp"

using namespace std;

int main()
{
    Dijamant d1, d2(3, 24), d3(d2);
    Trezor<Dijamant, 10> t1;

    t1.ubaciSadrzaj(d2);
    t1.ubaciSadrzaj(d3);
    cout << t1.getBrojPopunjenihSefova() << endl;
    cout << (t1.izbaciSadrzaj(2) == true ? "USPESNO" : "NEUSPESNO") << endl;
    cout << t1.getBrojPopunjenihSefova() << endl;
    /*cout << (t1.getSadrzaj(1) == 0 ? t1.getSadrzaj(1) : "NEUSPELO") << endl;*/


    return 0;
}
