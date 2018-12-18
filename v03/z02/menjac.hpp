#ifndef MENJAC_HPP
#define MENJAC_HPP

enum TIP_MENJACA{
	AUTOMATIK = 0,
	MANUELNI = 1
};

class Menjac{
public:
	Menjac(){
		_tip = MANUELNI;
		_brzina = 3;
	};

	Menjac(int brzina, TIP_MENJACA tip){
		_brzina = brzina;
		_tip = tip;
	}
	
	Menjac(const Menjac &m){
		_brzina = m._brzina;
		_tip = m._tip;
	}
	
	bool setTip(TIP_MENJACA tip){ 
		if(_tip = tip)
			return true;
		return false;
	}
	bool setBrzina(int brzina){
		if(_brzina = brzina)
			return true;
		return false;
	}
	TIP_MENJACA getTip()const{ return _tip; }
	int getBrzina()const{ return _brzina; }
	

private:
	int _brzina;
	TIP_MENJACA _tip;

};

#endif
