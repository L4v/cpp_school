#ifndef VALJAK_HPP
#define VALJAK_HPP

#include "krug.hpp"
#include "pravougaonik.hpp"

class Valjak{

public:
	Valjak(int r = 1, int a = 2, int b = 3):krug(r), pravougaonik(a, b){
			
	}
	
	double getR()const{ return krug.getR();}
	double getH()const{ return pravougaonik.getB(); }
	double getP()const{ return 2*krug.getP() + pravougaonik.getP(); }
	double getV()const{ return krug.getP()*pravougaonik.getB(); }

private:
	Krug krug;
	Pravougaonik pravougaonik;

};

#endif
