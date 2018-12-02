#include <iostream>
#include "telefongen3.hpp"

using namespace std;

int Kamera::photoCounter = 0;
int VideoKamera::videoCounter = 0;


int main()
{
    Kamera k1, k2(30, 100), k3(k2);
    VideoKamera vk1, vk2(30, 4000);
    Telefon t1, t2("060060060060");
    TelefonGen2 ts, ts2("060060060060", k3);
    TelefonGen3 tt, tt2("060123435770", k3, vk2);

    cout << (t2.pozovi("060060060060") == true ? "POZVAO" : "NEUSPELO") << endl;
    cout << (t2.pozovi("060") == true ? "POZVAO" : "NEUSPELO") << endl;

    cout << (ts2.pozovi("060060060060") == true ? "POZVAO" : "NEUSPELO") << endl;
    cout << (ts2.pozovi("060") == true ? "POZVAO" : "NEUSPELO") << endl;

    cout << (tt2.pozovi("060060060060") == true ? "POZVAO" : "NEUSPELO") << endl;
    cout << (tt2.pozovi("060") == true ? "POZVAO" : "NEUSPELO") << endl;

    cout << (ts2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;
    cout << (ts2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;
    cout << (ts2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;
    cout << (ts2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;

    cout << (tt2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;
    cout << (tt2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;
    cout << (tt2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;
    cout << (tt2.slikajSlik() == true ? "SLIKAO" : "NIJE SLIKAO") << endl;


    cout << (tt2.snimiVideo(1) == true ? "SNIMIO" : "NIJE SNIMIO") << endl;
    cout << (tt2.snimiVideo(100) == true ? "SNIMIO" : "NIJE SNIMIO") << endl;
    cout << (tt2.snimiVideo(1000) == true ? "SNIMIO" : "NIJE SNIMIO") << endl;
    cout << (tt2.snimiVideo(3000) == true ? "SNIMIO" : "NIJE SNIMIO") << endl;

    cout << k1.getPhotoCounter() << " " << k2.getPhotoCounter() << " " << k3.getPhotoCounter() << endl;
    cout << vk1.getVideoCounter() << " " << vk2.getVideoCounter() << endl;

    cout << Kamera::photoCounter << endl;
    cout << VideoKamera::videoCounter << endl;



    return 0;
}
