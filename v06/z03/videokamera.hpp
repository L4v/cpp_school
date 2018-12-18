#ifndef VIDEOKAMERA_HPP_INCLUDED
#define VIDEOKAMERA_HPP_INCLUDED
#include "kamera.hpp"

class VideoKamera : public Kamera{
public:
    static int videoCounter;

    VideoKamera() : Kamera(){}
    VideoKamera(int mp, int fs) : Kamera(mp, fs){}
    VideoKamera(const VideoKamera& vk) : Kamera((Kamera)vk){}

    int getVideoCounter() const { return videoCounter; }

    bool snimaj(int sekunde){
        if(freeSpace - sekunde * megaPiksel >= 0){
            videoCounter ++;
            return true;
        }
        return false;
    }
};

#endif // VIDEOKAMERA_HPP_INCLUDED
