#ifndef AUTOMOBIL_HPP
#define AUTOMOBIL_HPP

#include "menjac.hpp"
#include "skoljka.hpp"

/* enum STANJE
* Opisuje trenutno stanje automobila
*/
enum STANJE{
	UGASEN = 0,
	UPALJEN = 1,
	POKVAREN = 2
};

/* class Automobil
* Opisuje klasu automobila
*/
class Automobil{
public:
	friend void ispisiAuto(const Automobil &a);
	 /* Automobil
	 * Default konstruktor
	 */
	 Automobil():
		 _stanje(UGASEN),
		 _menjac(0, MANUELNI),
		 _skoljka(CRVENA){}
	 	 
	 /* Automobil
	 * Konstruktor s parametrima
	 */
	 Automobil(STANJE stanje, int brzina, TIP_MENJACA tip,
	 BOJA_SKOLJKE boja):
	 	_stanje(stanje),
	 	_menjac(brzina, tip),
	 	_skoljka(boja){}
	 
	 /* Automobil
	 * Konstruktor kopije
	 */
	 Automobil(const Automobil &a):
	 	_stanje(a._stanje),
	 	_menjac(a._menjac),
	 	_skoljka(a._skoljka){}
	 
	 /* bool upali
	 * Pali auto
	 */
	 bool upali(){
	 	if(_stanje == UGASEN){
	 		_stanje = UPALJEN;
	 		if(_menjac.setBrzina(1))
	 			return true;
	 	}
	 	return false;
	 }
	 
	 /* bool ugasi
	 * Ugasi auto
	 */
	 bool ugasi(){
	 	if(_stanje == UPALJEN){
	 		_stanje = UGASEN;
	 		if(_menjac.setBrzina(0))
	 			return true;
	 	}
	 	return false;
	 }
	 
	 /* bool pokvari
	 * Pokvari auto
	 */
	 bool pokvari(){
	 	if(_stanje != POKVAREN){
	 		_stanje = POKVAREN;
	 		if(_menjac.setBrzina(0))
	 			return true;
	 	}
	 	return false;
	 }
	 
	 /* bool popravi
	 * Popravi auto
	 */
	 bool popravi(){
	 	if(_stanje == POKVAREN){
	 		_stanje =UGASEN;
	 		if(_menjac.setBrzina(0))
	 			return true;
	 	}
	 	return false;
	 }
	 
	 /* bool povecajBrzinu
	 * Poveca brzinu auta
	 */
	 bool povecajBrzinu(int brzina){
	 	if(_menjac.setBrzina(_menjac.getBrzina() + 1))
	 		return true;
	 	return false;
	 }
	 
	 /* bool smanjiBrzinu
	 * Smanjuje brzinu auta
	 */
	 bool smanjiBrzinu(){
	 	if(_menjac.setBrzina(_menjac.getBrzina() - 1))
	 		return true;
	 	return false;
	 }
	 
private:
	Menjac _menjac;
	Skoljka _skoljka;
	STANJE _stanje;
	
};

#endif
