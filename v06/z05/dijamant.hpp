#ifndef DIJAMANT_HPP_INCLUDED
#define DIJAMANT_HPP_INCLUDED
#include <iostream>

using namespace std;

class Dijamant{
private:
    double vrednost;
    double karat;

public:
    Dijamant(): vrednost(0), karat(0){}
    Dijamant(double vrednost, double karat) : vrednost(vrednost), karat(karat){}
    Dijamant(const Dijamant& d) : vrednost(d.vrednost), karat(d.karat){}

    friend ostream& operator<<(ostream& o, const Dijamant& d){
        o << "VREDNOST: " << d.vrednost << "\nKARATA: " << d.karat << "\n";
        return o;
    }

};

#endif // DIJAMANT_HPP_INCLUDED
