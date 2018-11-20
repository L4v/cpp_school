#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED

#include <iostream>
using namespace std;

#define TEMP_MIN 0
#define TEMP_MAX 220
#define TEMP_KORAK 20


class Rerna{

enum StanjeRerne{
    ISKLJUCENA,
    UKLJUCENA,
    POKVARENA
};

public:
    Rerna();

    bool ukljuci();
    bool iskljuci();
    bool pokvari();
    bool popravi();
    bool pojacajTemperaturu();
    bool smanjiTemperaturu();

    int getTemperatura()const;
    StanjeRerne getTrenutnoStanje() const;

private:
int _temperatura;
StanjeRerne _trenutnoStanje;


};

#endif // RERNA_HPP_INCLUDED
