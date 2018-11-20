#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>


class Osoba{
public:

    Osoba(){
        _dan = _mesec = _godina = 1;
    }
    Osoba(int dan, int mesec, int godina){
        this->_dan = dan;
        this->_mesec = mesec;
        this->_godina = godina;
    }
    Osoba(const Osoba &x){
        this->_dan = x._dan;
        this->_mesec = x._mesec;
        this->_godina = x._godina;

    }


    void ispisDatum(){
        std::cout << "Rodjen\a: " << this->_dan <<' ' << this->_mesec << ' ' << this->_godina << std::endl;
    }


private:
    int _dan, _mesec, _godina;
};

#endif // OSOBA_HPP_INCLUDED
