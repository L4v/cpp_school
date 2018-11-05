#include <iostream>
#include "automobil.hpp"

void ispisiMenjac(const Menjac &m){
	std::cout << "MENJAC:" << std::endl << "\t\tTIP:" <<"\t";
	switch(m.getTip()){
		case AUTOMATIK:
			std::cout << "AUTOMATIK";
			break;
		case MANUELNI:
			std::cout << "MANUELNI";
			break;
		default:
			std::cout << "GRESKA U ISPISU MENJACA" << std::endl;
	}
	std::cout << std::endl << "\t\tBRZINA:\t" << m.getBrzina() <<std::endl;
}

void ispisiSkoljku(const Skoljka &s){
	std::cout << "SKOLJKA:" << std::endl << "\t\tBOJA:" <<"\t";
	switch(s.getBoja()){
		case CRVENA:
			std::cout << "CRVENA";
			break;
		case ZELENA:
			std::cout << "ZELENA";
			break;
		case PLAVA:
			std::cout << "PLAVA";
			break;
		default:
			std::cout << "GRESKA U ISPISU SKOLJKE" << std::endl;
	}
	std::cout << std::endl;
}

//void ispisiSkoljku()Skoljka &s){}
void ispisiAuto(const Automobil &a){
	std::cout << "AUTO:" << std::endl <<'\t'; 
	ispisiMenjac(a._menjac);
	std::cout << '\t';
	ispisiSkoljku(a._skoljka);
}

int main(){

	Automobil a1;

	ispisiAuto(a1);

	return 0;
}
