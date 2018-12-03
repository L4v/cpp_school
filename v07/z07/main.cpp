#include <iostream>
#include "grad.hpp"
#include "voce.hpp"
#include "odeca.hpp"

using namespace std;

int Odeca::velike = 0;

int main()
{
    Odeca o1("Nesto", 100, M, MAJICA), o2("Nesto2", 100, L, MAJICA), o3("Nesto3", 100, XL, PANTALONE);
    Voce v1("BANANA", 101, "AUSTRIJA ?", 3), v2("JAGODA", 10, "AUSTRIJA ?", 1), v3("VISE NISTA", 101, "AUSTRIJA ?", 6);
    Prodavnica p1("Piljarnica"), p2("Nepiljarnica"), p3("SVASTARA");
    Grad ns("Novi Sad");

    p1.dodajProizvod(o1);
    p1.dodajProizvod(v1);
    p2.dodajProizvod(o2);
    p2.dodajProizvod(v2);
    p3.dodajProizvod(v3);
    p3.dodajProizvod(o3);


    ns.dodajProdavnicu(p1);
    ns.dodajProdavnicu(p2);
    ns.dodajProdavnicu(p3);

    cout << "TESTIRANJE ISPISA PRODAVNICE:" << endl << p1 << p2 << p3 << endl;
    cout << "TESTIRANJE ISPISA PROIZVODA:" << endl;
    o1.ispisi(); cout << endl;o2.ispisi();cout << endl; o3.ispisi();cout << endl;v1.ispisi();cout << endl; v2.ispisi();cout << endl; v3.ispisi();cout << endl;
    cout << "test";
    o2.ispisi();

    ns.ispisiNajjeftiniju();


    return 0;
}
