#ifndef KRUG_HPP
#define KRUG_HPP
#define PI 3.14

class Krug{

public:
	Krug(int r = 1){
		_r = r;
	}

	double getR()const{return _r;}
	double getO()const{return 2*_r*PI;}
	double getP()const{return _r*_r*PI;}


private:
	double _r;
};

#endif
