#ifndef EVIDENCIJALEKOVA_HPP_INCLUDED
#define EVIDENCIJALEKOVA_HPP_INCLUDED
#include "list.hpp"
#include "lek.hpp"
#include <iostream>

class EvidencijaLekova{
private:
    DinString _nazivApoteke, _datum;
    List<Lek> _lekovi;
public:
    EvidencijaLekova() : _nazivApoteke("Fun time apothecary"), _datum("271118"){}

    bool unesiLek(const Lek& lek){
        if(_lekovi.add(1, lek))
            return true;
        else
            return false;
    }

    bool brisiLek(int poz){
        if(_lekovi.remove(poz))
            return true;
        else
            return false;
    }

    void sortirajLek(){
        Lek temp1, temp2, x;
        int i, j;
        for(i = 0; i < _lekovi.size() - 1; i++){
            for(j = 0; j < _lekovi.size() - i - 1; j ++){
                _lekovi.read(j + 1, temp1);
                _lekovi.read(j + 2, temp2);
                if(temp1.vrednost() > temp2.vrednost()){
                    //std::cout << "PRVI" << temp1.vrednost() << "DRUGI" << temp2.vrednost() << std::endl;
                    _lekovi.remove(j + 1);
                    _lekovi.add(j+1, temp2);
                    _lekovi.remove(j + 2);
                    _lekovi.add(j+2, temp1);
                }
            }

        }
    }

friend ostream& operator<<(ostream& os, EvidencijaLekova &ev){
    os << "APOTEKA:" << ev._nazivApoteke << std::endl << "DATUM:" << ev._datum << std::endl;
    int i;
    for(i = 0; i < ev._lekovi.size(); i ++){
        Lek tmp;
        ev._lekovi.read(i + 1, tmp);
        std::cout << tmp;
    }
    return os;
}

};

#endif // EVIDENCIJALEKOVA_HPP_INCLUDED
