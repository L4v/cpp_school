#ifndef APPLICATION_HPP_INCLUDED
#define APPLICATION_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>

class Application{
public:
    static int appCount;
protected:
    DinString language, author;
    double sizeMB;
public:
    Application() : language("ENG"), author("JOSEPH SMITH"), sizeMB(42){ appCount ++;}

    Application(const char* lan, const double s) :
        language(lan),
        sizeMB(s)
    {
        author = "OpenSource inc";
        appCount ++;
    }

    Application(const Application& a):
        language(a.language),
        author(a.author),
        sizeMB(a.sizeMB){ appCount ++; }

    ~Application(){
        appCount --;
    }

    int getCount() const{ return appCount; }

    friend std::ostream& operator<<(ostream& o, const Application& a){
        o << "LANGUAGE: " << a.language << " AUTHOR: " << a.author << " SIZE[MB]: " << a.sizeMB << "\n";
        return o;
    }

};

#endif // APPLICATION_HPP_INCLUDED
