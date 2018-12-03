#ifndef GRAD_HPP_INCLUDED
#define GRAD_HPP_INCLUDED
#include "prodavnica.hpp"

class Grad{
private:
    DinString naziv;
    List<Prodavnica*> prodavnice;
public:
    Grad() : naziv("LOLOGRAD"){}
    Grad(const DinString& ime) : naziv(ime){}

    void dodajProdavnicu( Prodavnica& p){
        prodavnice.add(prodavnice.size() + 1, &p);
    }

    void ispisiNajjeftiniju(){
        Prodavnica* tmp;
        prodavnice.read(1, tmp);
        double min = tmp->getProsecnaCena();
        int ind = 0;
        for(int i = 0; i < prodavnice.size(); i++){
            prodavnice.read(i + 1, tmp);
            if(tmp->getProsecnaCena() < min){
                min = tmp->getProsecnaCena();
                ind = i + 1;
            }
        }
        prodavnice.read(ind, tmp);
        cout << "PRODAVNICA SA NAJMANJOM PROSECNOM CENOM JE:" << endl << *tmp << endl;
    }

};

#endif // GRAD_HPP_INCLUDED
