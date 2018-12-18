#include <iostream>
#include "androidapp.hpp"
#include "desktopapp.hpp"
#include "application.hpp"

using namespace std;

int Application::appCount = 0;
int AndroidApp::androidCount = 0;
int DesktopApp::desktopCount = 0;

int main()
{
    Computer minimum(10, 4, "Ti 1080", "ANY"), optimum(100, 400, "Ti 2080", "LINUX MASTER RACE");
    Application a1, a2("LEL", 123), a3(a2);
    AndroidApp an1, an2(1, 8, 321), an3(an2);
    DesktopApp d1, d2(minimum, optimum, "C", 10), d3(d2);

    cout << "COMPUTERS:" << endl;
    cout << minimum << optimum;
    cout << "APPLICATIONS:" << endl;
    cout << a1 << a2 << a3 << endl;
    cout << "ANDROID APPS:" << endl;
    cout << an1 << an2 << an3 << endl;
    cout << "DESKTOP APPS:" << endl;
    cout << d1 << d2 << d3 << endl;

    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;

    {
        Application test;
    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;
    }

    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;
    {
        AndroidApp test;
    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;
    }

    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;

    {
        DesktopApp test;
    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;
    }

    cout << "NO. OF APPLICATIONS: " << Application::appCount << endl;
    cout << "NO. OF ANDROID APPLICATIONS: " << AndroidApp::androidCount << endl;
    cout << "NO. OF DESKTOP APPLICATIONS: " << DesktopApp::desktopCount << endl;

    return 0;
}
