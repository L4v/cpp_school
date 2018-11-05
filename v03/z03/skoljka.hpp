#ifndef SKOLJKA_HPP
#define SKOLJKA_HPP


/* enum BOJA_SKOLJKE
* Odredjuje boju skoljke auta
*/
enum BOJA_SKOLJKE{
	CRVENA = 0,
	ZELENA = 1,
	PLAVA = 2
};

class Skoljka{
	public:
	 /* Skoljka
	 * Default konstruktor
	 */
	 Skoljka(){}
	 
	 /* Skoljka
	 * Konstruktor s parametrima
	 */
	 Skoljka(BOJA_SKOLJKE boja):_boja(boja){}
	 
	 /* Skoljka
	 * Konstruktor kopije
	 */
	 Skoljka(const Skoljka &s):_boja(s._boja){}
	 
	 // Geteri
	 BOJA_SKOLJKE getBoja() const{ return _boja; };
	 
	 // Seteri
	 void setBoja(BOJA_SKOLJKE boja) { _boja  = boja; }
	 
	private:
		BOJA_SKOLJKE _boja;
};

#endif
