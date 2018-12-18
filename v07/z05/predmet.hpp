#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED
#include "kolokvijum.hpp"
#include "list.hpp"

class Predmet {
protected:
    DinString naziv;
    List<Test*> testovi;
public:
    Predmet(): naziv("Lel"){};
    Predmet(const DinString& ime) : naziv(ime){}
    Predmet(const Predmet& p) : naziv(p.naziv), testovi(p.testovi){}

    void dodajTest(Test& t){
        testovi.add(testovi.size() + 1, &t);
    }

    bool polozio(){
        Test* tmp;
        int i =0, ukupno = 0;
        for(i = 0; i < testovi.size(); i ++){
            testovi.read(i+1, tmp);
            ukupno += tmp->getPoeni();
            if(!tmp->polozio())
                return false;
        }
        if(ukupno > 55)
            return true;
        return false;
    }

    int getUkupniPoeni() const{
        Test* tmp;
        int i, ukupno = 0;
        for(i = 0; i < testovi.size(); i ++){
            testovi.read(i + 1, tmp);
            ukupno += tmp->getPoeni();
        }
        return ukupno;
    }

    DinString getNaziv() const{ return naziv; }

    void ispis() const{
        Test* tmp;
        int i;
        std::cout<< "PREDMET: " << naziv << std::endl << "\tTESTOVI: " << std::endl;

        for(i = 0; i < testovi.size(); i ++){
            std::cout << "\t\t";
            testovi.read(i+1, tmp);
            tmp->ispis();
        }
    }

};

#endif // PREDMET_HPP_INCLUDED
