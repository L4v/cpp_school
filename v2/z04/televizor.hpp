#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED
#define MAX_ZVUK 20
#define MIN_ZVUK 0
#define KORAK_ZVUK 1
#define KORAK_KANAL 1
#define MAX_KANAL 5
#define MIN_KANAL 1

enum StanjeTelevizora{
    UKLJUCEN = 0,
    ISKLJUCEN = 1,
    POKVAREN = 2
};

class Televizor{
public:
    Televizor();
    Televizor(const Televizor &t);

    bool ukljuci();
    bool iskljuci();
    bool pokvari();
    bool popravi();

    bool pojacajZvuk();
    bool smanjiZvuk();
    bool sledeciKanal();
    bool prethodniKanal();

    StanjeTelevizora getStanje() const;
    int getZvuk() const;
    int getKanal() const;

private:
    StanjeTelevizora stanje;
    int zvuk, kanal;


};



#endif // TELEVIZOR_HPP_INCLUDED
