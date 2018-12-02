#include <iostream>
#include "pravilanoblik.hpp"
#include "krug.hpp"
#include "kvadrat.hpp"
using namespace std;

int main()
{
    Elipsa e1, e2(4,5), e3(e2);
    Pravougaonik p1, p2(3, 4), p3(p2);
    Krug k1, k2(3), k3(k2);
    Kvadrat kv1, kv2(2), kv3(kv2);
    Oblik o1, o2(10, 5, 5, 6), o3(o2);
    PravilanOblik po1, po2(10 ,5), po3(po2);

    cout << "ELIPSE:" << endl;
    cout << e1.getA() << " " << e1.getB() << " " << e1.getObim() << " "<< e1.getPovrsina() << endl;
    cout << e2.getA() << " " << e2.getB() << " " << e2.getObim() << " " <<e2.getPovrsina() << endl;
    cout << e3.getA() << " " << e3.getB() << " " << e3.getObim() << " " <<e3.getPovrsina() << endl;

    cout << "PRAVOUGAONICI:" <<endl;
    cout << p1.getA() << " " << p1.getB() << " " << p1.getObim() << " " <<p1.getPovrsina() << endl;
    cout << p2.getA() << " " << p2.getB() << " " << p2.getObim() << " " <<p2.getPovrsina() << endl;
    cout << p3.getA() << " " << p3.getB() << " " << p3.getObim() << " " <<p3.getPovrsina() << endl;

    cout << "KRUGOVI:" <<endl;
    cout << k1.getA() << " " << k1.getObim() << " " <<k1.getPovrsina() << endl;
    cout << k2.getA() << " " << k2.getObim() << " " <<k2.getPovrsina() << endl;
    cout << k3.getA() << " " << k3.getObim() << " " <<k3.getPovrsina() << endl;

    cout << "KVADRATI:" <<endl;
    cout << kv1.getA() << " " << kv1.getObim() << " " <<kv1.getPovrsina() << endl;
    cout << kv2.getA() << " " << kv2.getObim() << " " <<kv2.getPovrsina() << endl;
    cout << kv3.getA() << " " << kv3.getObim() << " " <<kv3.getPovrsina() << endl;

    cout << "PRAVILNI OBLICI:" << endl;
    cout << po1.getObim() <<" " << po1.getPovrsina() << endl;
    cout << po2.getObim() <<" " << po2.getPovrsina() << endl;
    cout << po3.getObim() <<" " << po3.getPovrsina() << endl;

    cout << "OBLICI:" << endl;
    cout << o1.getObim() <<" " << o1.getPovrsina() << endl;
    cout << o2.getObim() <<" " << o2.getPovrsina() << endl;
    cout << o3.getObim() <<" " << o3.getPovrsina() << endl;






    return 0;
}
