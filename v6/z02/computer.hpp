#ifndef COMPUTER_HPP_INCLUDED
#define COMPUTER_HPP_INCLUDED
#include "dinstring.hpp"

class Computer{
public:
    Computer();
    Computer(double, double, char*, char*);
    ComputeR(const Computer&)

    friend ostream& operator<<(ostream& o, const Computer& c);

private:
    double hddGB, ramGB;
    DinString gCard, os;

};

#endif // COMPUTER_HPP_INCLUDED
