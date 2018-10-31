#include <iostream>

#include "valjak.hpp"

void printValjak(const Valjak &v){
	std::cout << "POVRSINA: " << v.getP() << std::endl << "ZAPREMINA: " << v.getV() << std::endl; 
}

int main(){
	Valjak valjak;

	printValjak(valjak);

	return 0;
}
