#ifndef KOLOKVIJUM_HPP_INCLUDED
#define KOLOKVIJUM_HPP_INCLUDED
#include "test.hpp"
#include <cstdlib>

class Kolokvijum : public Test{
public:
    Kolokvijum() : Test("Nzm", 100){}
    Kolokvijum(const char* ime) : Test(ime, rand()%25 + 1){}

    int getPoeni() const { return osvojeniPoeni; }
    bool polozio() const{
        return osvojeniPoeni > 12 ? true : false;
    }


};

#endif // KOLOKVIJUM_HPP_INCLUDED
