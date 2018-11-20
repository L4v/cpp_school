#include "rerna.hpp"

Rerna::Rerna(){
    this->_trenutnoStanje = ISKLJUCENA;
    this->_temperatura = 0;
};

bool Rerna::ukljuci() {
    if(this->_trenutnoStanje == ISKLJUCENA){
        this->_trenutnoStanje = UKLJUCENA;
        this->_temperatura += TEMP_KORAK;
        return true;
    }
    return false;

}

bool Rerna::iskljuci() {
    if(this->_trenutnoStanje == UKLJUCENA){
        this->_trenutnoStanje = ISKLJUCENA;
        this->_temperatura = TEMP_MIN;
        return true;
    }
    return false;

}

bool Rerna::pokvari(){
    if(this->_trenutnoStanje == UKLJUCENA || this->_trenutnoStanje == ISKLJUCENA){
        this->_trenutnoStanje = POKVARENA;
        this->_temperatura = TEMP_MIN;
        return true;
    }
    return false;
}

bool Rerna::popravi(){
    if(this->_trenutnoStanje == POKVARENA){
        this->_trenutnoStanje = ISKLJUCENA;
        return true;
    }
    return false;
}

bool Rerna::pojacajTemperaturu(){
    if(this->_trenutnoStanje == UKLJUCENA && this->_temperatura + TEMP_KORAK <= TEMP_MAX){
        this->_temperatura += TEMP_KORAK;
        return true;
    }
    return false;
}
bool Rerna::smanjiTemperaturu(){
    if(this->_trenutnoStanje == UKLJUCENA && this->_temperatura - TEMP_KORAK >= TEMP_MIN){
        this->_temperatura -= TEMP_KORAK;
        return true;
    }
    return false;
}

StanjeRerne Rerna::getTrenutnoStanje() const{
    return this->_trenutnoStanje;
}

int Rerna::getTemperatura() const{
    return this->_temperatura;
}
