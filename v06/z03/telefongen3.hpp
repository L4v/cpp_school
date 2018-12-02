#ifndef TELEFONGEN3_HPP_INCLUDED
#define TELEFONGEN3_HPP_INCLUDED
#include "telefongen2.hpp"
#include "videokamera.hpp"

class TelefonGen3 : public TelefonGen2{
private:
    VideoKamera vk;
public:
    TelefonGen3() : TelefonGen2(),
        vk(){}
    TelefonGen3(const DinString& br, const Kamera& k, const VideoKamera& vk) :
        TelefonGen2(br, k),
        vk(vk){}

    bool snimiVideo(int sec){
        return vk.snimaj(sec);
    }
};

#endif // TELEFONGEN3_HPP_INCLUDED
