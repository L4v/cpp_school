#ifndef ANDROIDAPP_HPP_INCLUDED
#define ANDROIDAPP_HPP_INCLUDED
#include "application.hpp"

class AndroidApp : public Application{
public:
    static int androidCount;
private:
    double minVersion, targetVersion;
public:
    AndroidApp() :
        Application("Java", 123),
        minVersion(1),
        targetVersion(7)
    {
        androidCount ++;
    }

    AndroidApp(double mV, double tV, double s) :
        minVersion(mV),
        targetVersion(tV),
        Application("Java", s)
    {
        androidCount ++;
    }

    AndroidApp(const AndroidApp& a) :
        Application((Application)a),
        minVersion(a.minVersion),
        targetVersion(a.targetVersion)
    {
        androidCount ++;
    }

    ~AndroidApp(){
        androidCount --;
    }

    int getCount() const{ return androidCount; }

    friend std::ostream& operator << (ostream& o, const AndroidApp& a){
        o << (Application)a << "MIN_VERSION: " << a.minVersion << " TARGET_VERSION: " << a.targetVersion << "\n";
        return o;
    }
};

#endif // ANDROIDAPP_HPP_INCLUDED
