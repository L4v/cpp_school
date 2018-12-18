#ifndef COMPUTER_HPP_INCLUDED
#define COMPUTER_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>

class Computer{
protected:
    DinString gCard, os;
    double hddGB, ramGB;
public:
    Computer():
        gCard("VOODOO"),
        os("DEEPIN"),
        hddGB(1),
        ramGB(1){}

    Computer(double hdd, double ram, DinString card, DinString os):
        gCard(card),
        os(os),
        hddGB(hdd),
        ramGB(ram){}

    Computer(const Computer& c):
        gCard(c.gCard),
        os(c.os),
        hddGB(c.hddGB),
        ramGB(c.ramGB){}

    friend std::ostream& operator<<(ostream& o, const Computer& c){
        o << "HDD[GB]: " << c.hddGB << " RAM[GB]: " << c.ramGB << " GPU: " << c.gCard << " OS: " << c.os << "\n";
        return o;
    }

};

#endif // COMPUTER_HPP_INCLUDED
