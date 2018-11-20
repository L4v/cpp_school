#include "televizor.hpp"

Televizor::Televizor(){
    stanje = ISKLJUCEN;
    zvuk = 0;
    kanal = 1;
}

Televizor::Televizor(const Televizor &t){
    stanje = t.stanje;
    zvuk = t.zvuk;
    kanal = t.kanal;
}

bool Televizor::ukljuci(){
    if(stanje == ISKLJUCEN){
        stanje = UKLJUCEN;
        return true;
    }
    return false;
}
bool Televizor::iskljuci(){
    if(stanje == UKLJUCEN){
        stanje = ISKLJUCEN;
        return true;
    }
    return false;
}
bool Televizor::pokvari(){
    if(stanje == ISKLJUCEN || stanje == UKLJUCEN){
        stanje = POKVAREN;
        return true;
    }
    return false;
}
bool Televizor::popravi(){
    if(stanje == POKVAREN){
        stanje = ISKLJUCEN;
        return true;
    }
    return false;
}

bool Televizor::pojacajZvuk(){
    if(stanje == UKLJUCEN && zvuk + KORAK_ZVUK <= MAX_ZVUK){
        zvuk += KORAK_ZVUK;
        return true;
    }
    return false;
}

bool Televizor::smanjiZvuk(){
    if(stanje == UKLJUCEN && zvuk - KORAK_ZVUK >= MIN_ZVUK){
        zvuk -= KORAK_ZVUK;
        return true;
    }
    return false;
}

bool Televizor::sledeciKanal(){
    if(stanje == UKLJUCEN && kanal + KORAK_KANAL <= MAX_KANAL){
        kanal += KORAK_KANAL;
        return true;
    }
    return false;
}

bool Televizor::prethodniKanal(){
    if(stanje == UKLJUCEN && kanal - KORAK_KANAL >= MAX_KANAL){
        kanal -= KORAK_KANAL;
        return true;
    }
    return false;
}

StanjeTelevizora Televizor::getStanje()const{
    return stanje;
}

int Televizor::getZvuk() const{return zvuk;}
int Televizor::getKanal()const{return kanal;}
