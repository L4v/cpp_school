#ifndef TELEFON_HPP_INCLUDED
#define TELEFON_HPP_INCLUDED
#include "dinstring.hpp"

class Telefon{
protected:
    DinString broj;
public:
    Telefon() : broj("060"){}
    Telefon(const DinString& s) : broj(s){}

    bool pozovi(const DinString& s){
        if(s != broj)
            return true;
        return false;
    }
};

#endif // TELEFON_HPP_INCLUDED
