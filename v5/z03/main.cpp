#include <iostream>
#include "pravilni_oblik.hpp"
using namespace std;

int main()
{
    Pravilni_Oblik ob = Pravilni_Oblik(10, 30);
    cout << ob.getP() << endl << ob.getO() << endl;


    return 0;
}
