#include <iostream>
#include "jkstrougao.hpp"

using namespace std;

int main()
{
    Trougao t1, t2(4, 5 ,6);
    JKTrougao jk1, jk2(5, 3);
    JKSTrougao jks1, jks2(4);
    cout << "OPSTI (STRANICE / OBIM / POVRSINA):" << endl << t1.getA() << " " << t1.getB() << " " << t1.getC()<<" / "
            << t1.getObim() << " / " << t1.getPovrsina() << endl;
    cout << "OPSTI (STRANICE / OBIM / POVRSINA):" << endl << t2.getA() << " " << t2.getB() << " " << t2.getC()<<" / "
            << t2.getObim() << " / " << t2.getPovrsina() << endl;
    cout << "OPSTI (STRANICE / OBIM / POVRSINA):" << endl << jk1.getA() << " " << jk1.getB() << " " << jk1.getC()<<" / "
            << jk1.getObim() << " / " << jk1.getPovrsina() << endl;
    cout << "OPSTI (STRANICE / OBIM / POVRSINA):" << endl << jk2.getA() << " " << jk2.getB() << " " << jk2.getC()<<" / "
            << jk2.getObim() << " / " << jk2.getPovrsina() << endl;
    cout << "OPSTI (STRANICE / OBIM / POVRSINA):" << endl << jks1.getA() << " " << jks1.getB() << " " << jks1.getC()<<" / "
            << jks1.getObim() << " / " << jks1.getPovrsina() << endl;
    cout << "OPSTI (STRANICE / OBIM / POVRSINA):" << endl << jks2.getA() << " " << jks2.getB() << " " << jks2.getC()<<" / "
            << jks2.getObim() << " / " << jks2.getPovrsina() << endl;
    return 0;
}
