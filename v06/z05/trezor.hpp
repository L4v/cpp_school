#ifndef TREZOR_HPP_INCLUDED
#define TREZOR_HPP_INCLUDED

template <class SADRZAJ, int KAPACITET>
class Trezor{
private:
    SADRZAJ stuff[KAPACITET];
    bool stanje[KAPACITET];
    int popunjeni;
public:
    Trezor():popunjeni(0){
        int i;
        for(i = 0; i < KAPACITET; i ++)
            stanje[i] = false;
    }
    int getBrojPopunjenihSefova(){
        /*int i = 0, temp = 0;
        for(i = 0; i < KAPACITET; i ++){
            if(stanje[i])
                temp++;
        }
        return temp;*/ return popunjeni;
    }

    int ubaciSadrzaj(const SADRZAJ& predmet){
        int i = 0;
        for(i = 0; i < KAPACITET; i ++){
            if(!stanje[i]){
                stuff[i] = predmet;
                stanje[i] = true;
                popunjeni++;
                return i;
            }
        }
        return -1;
    }

    bool izbaciSadrzaj(int sef){
        if(stanje[sef]){
            stanje[sef] = false;
            popunjeni --;
            return true;
        }
        return false;
    }

    /*SADRZAJ& getSadrzaj(int sef){
        if(stanje[sef])
            return stuff[sef];
        return 0;
    }*/

};

#endif // TREZOR_HPP_INCLUDED
