#ifndef MENJAC_HPP
#define MENJAC_HPP

/* enum TIP_MENJACA
* Definise tip menjaca auta
*/
enum TIP_MENJACA{
	AUTOMATIK = 0,
	MANUELNI = 1
};

/* class Menjac
* Sadrzi osobine menjaca
*/
class Menjac{
	public:
	//friend void ispisiMenjac(const Menjac &);
		/* Menjac
		* Default konstruktor
		*/
		Menjac();
		
		/* Menjac
		* Konstruktor s parametrima
		*/
		Menjac(int brzina, TIP_MENJACA tip):
		_brzina(brzina),
		_tip(tip){}
		/* Menjac
		* Konstruktor kopije
		*/
		Menjac(const Menjac &m){
			_brzina = m._brzina;
			_tip = m._tip;	
		}
		
		// Geteri
		TIP_MENJACA getTip() const{ return _tip; }
		int getBrzina() const{ return _brzina; }
		
		// Seteri
		void setTip(TIP_MENJACA tip) { _tip = tip; }
		bool setBrzina(int brzina) { 
			if(brzina >= 0 && brzina <= 6){
				_brzina = brzina;
				return true;
			}
			return false;
		}
		
		
		
	private:
		TIP_MENJACA _tip;
		int _brzina;
};

#endif
