#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED
#include "proizvod.hpp"
#include "list.hpp"

class Prodavnica{
protected:
    DinString naziv;
    List<Proizvod*> proizvodi;
public:
    Prodavnica(const DinString& ime) : naziv(ime){}

    void dodajProizvod(Proizvod& p){
        bool ima = false;
        Proizvod* tmp;
        for(int i = 0; i < proizvodi.size(); i ++){
            proizvodi.read(i +1, tmp);
            if(tmp->getNaziv() == p.getNaziv()){
                ima == true;
                break;
            }
        }
        if(!ima)
            proizvodi.add(proizvodi.size() + 1, &p);
    }

    bool obrisi( Proizvod& p){

        Proizvod* tmp;
        for(int i = 0; i < proizvodi.size(); i ++){
            proizvodi.read(i +1, tmp);
            if(tmp->getNaziv() == p.getNaziv()){
                proizvodi.remove(i + 1);
                return true;
            }
        }
        return false;
    }

    bool obrisi(int i){
        if(proizvodi.remove(i))
            return true;
        return false;
    }

    void akcija(){
        Proizvod* tmp;
        for(int i = 0; i < proizvodi.size(); i ++){
            proizvodi.read(i + 1, tmp);
            tmp->izracunajPopust();
        }
    }

    friend ostream& operator << (ostream& o, const Prodavnica& p){
        o << "PRODAVNICA: " << p.naziv << endl <<  " PROIZVODI: " << endl;
        Proizvod* tmp;
        for(int i = 0; i < p.proizvodi.size(); i ++){
            p.proizvodi.read(i + 1, tmp);
            tmp->ispisi();
            cout << endl;
        }
        return o;
    }

    int getProsecnaCena() const{
        double prosek = 0;
        Proizvod* tmp;
        for(int i = 0; i < proizvodi.size(); i++){
            proizvodi.read(i + 1, tmp);
            prosek += tmp->getCena();
        }

        return prosek/(double)proizvodi.size();
    }

};

#endif // PRODAVNICA_HPP_INCLUDED
