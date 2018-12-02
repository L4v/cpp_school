#ifndef KAMERA_HPP_INCLUDED
#define KAMERA_HPP_INCLUDED

class Kamera{
protected:
    int megaPiksel, freeSpace;

public:
    static int photoCounter;
    Kamera() :
        megaPiksel(2),
        freeSpace(100){}

    Kamera(int mp, int fs):
        megaPiksel(mp),
        freeSpace(fs){}

    Kamera(const Kamera& k):
        megaPiksel(k.megaPiksel),
        freeSpace(k.freeSpace){}

    int getPhotoCounter() const { return photoCounter; }
    bool slikaj(){
        if(freeSpace - megaPiksel >= 0){
            photoCounter ++;
            return true;
        }
        return false;
    }
};

#endif // KAMERA_HPP_INCLUDED
