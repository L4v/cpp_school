#include <iostream>
#include "evidencijalekova.hpp"

using namespace std;

int main()
{
    EvidencijaLekova apoteka;
    Lek magic, brufen(10, "BRUFEN", 100, 6), magibruf(brufen);
    apoteka.unesiLek(magic);
    apoteka.unesiLek(brufen);
    apoteka.unesiLek(magibruf);
    cout << apoteka << endl;
    apoteka.sortirajLek();
    cout << "SORTIRANO:" << endl << apoteka << endl;
    return 0;
}
