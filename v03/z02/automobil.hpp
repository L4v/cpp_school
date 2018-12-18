#ifndef AUTOMOBIL_HPP
#define AUTOMOBIL_HPP

#include "menjac.hpp"
#include "skoljka.hpp"

enum STANJE_AUTO{
	POKVAREN = 0,
	UGASEN = 1,
	VOZNJA = 2
};

class Automobil{
public:
	Automobil():menjac(), skoljka(){
		_stanje = UGASEN;
	}
	Automobil(){}
	Automobil(){}
private:
	STANJE_AUTO _stanje;
	Menjac menjac;
	Skoljka skoljka;
};


#endif
