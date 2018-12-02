#ifndef TEST_HPP_INCLUDED
#define TEST_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>

class Test{
protected:
    DinString naziv;
    int osvojeniPoeni;
public:
    Test(){}
    Test(const DinString& n, const int poeni) :
        naziv(n),
        osvojeniPoeni(poeni){}

    void ispis(){
        std::cout << "POENI: " << osvojeniPoeni << "NA TESTU :" << naziv <<'\n';
    }

    virtual int getPoeni() const = 0;
    virtual bool polozio() const = 0;
};

#endif // TEST_HPP_INCLUDED
