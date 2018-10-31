#ifndef PRAVOUGAONIK_HPP
#define PRAVOUGAONIK_HPP

class Pravougaonik{

public:
	Pravougaonik(int a = 2, int b = 3){
		_a = a;
		_b = b;
	}
	
	double getA()const{ return _a; }
	double getB()const{ return _b;} 
	double getO()const{ return 2*_a+2*_b; }
	double getP()const{ return _a*_b; }

private:
	double _a, _b;
};

#endif
