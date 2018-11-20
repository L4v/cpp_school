#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum tip_menjaca{
    automatik,
    manuelni
};

class Menjac{

public:
    Menjac(){
        _brzina = 0;
        _trenutniTip = automatik;
    }

    Menjac(int brzina, tip_menjaca tip){
        _trenutniTip = tip;
        _brzina = brzina;
    }
    Menjac(const Menjac &m){
        _trenutniTip = m.getTip();
        _brzina = m.getBrzina();
    }

    bool setBrzina(int b){
        if(b >= 0 && b <=6){_brzina = b; return true;}
        return false;
    }

    void setTip(tip_menjaca tip){
        _trenutniTip = tip;
    }

    int getBrzina() const{return _brzina;}

    tip_menjaca getTip() const{return _trenutniTip;}


private:
    int _brzina;
    tip_menjaca _trenutniTip;
};


#endif // MENJAC_HPP_INCLUDED
