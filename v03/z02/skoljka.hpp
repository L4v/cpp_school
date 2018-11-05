#ifndef SKOLJKA_HPP
#define SKOLJKA_HPP

enum BOJA_SKOLJKE{
	CRVENA = 0,
	PLAVA = 1,
	ZELENA = 2
};

class Skoljka{
public:
	Skoljka(){ _boja = PLAVA;}
	Skoljka(BOJA_SKOLJKE boja){
		_boja = boja;
	}
	
	Skoljka(const Skoljka &s){
		_boja = s._boja;
	}
	
	bool setBoja(BOJA_SKOLJKE boja){ _boja = boja; }
	BOJA_SKOLJKE getBoja(){ return _boja; }
	
private:
	BOJA_SKOLJKE _boja;
	
};

#endif
