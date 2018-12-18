#ifndef DESKTOPAPP_HPP_INCLUDED
#define DESKTOPAPP_HPP_INCLUDED
#include "application.hpp"
#include "computer.hpp"
class DesktopApp : public Application{
private:
    Computer minSysReq, optimumSysReq;
public:
    static int desktopCount;

    DesktopApp() :
        Application("Java", 123),
        minSysReq(4, 4, "GTI 1030", "ANY")
        {
        desktopCount ++;
        }

    DesktopApp(const Computer& m, const Computer& o, const char* lan, const double s):
        minSysReq(m),
        optimumSysReq(o),
        Application(lan, s){
            desktopCount++;
        }

    DesktopApp(const DesktopApp& d):
        Application((Application)d),
        minSysReq(d.minSysReq),
        optimumSysReq(d.optimumSysReq)
        { desktopCount ++;}

    ~DesktopApp(){
        desktopCount --;
    }

    int getCount() const { return desktopCount; }

    friend std::ostream& operator << (std::ostream& o, const DesktopApp& d){
        o << (Application)d << "MIN SYS REQ: " << d.minSysReq << "OPTIMAL SYS REQ: " << d.optimumSysReq << "\n";
        return o;
    }

};

#endif // DESKTOPAPP_HPP_INCLUDED
