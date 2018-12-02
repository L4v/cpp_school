#ifndef COMPONENT_HPP_INCLUDED
#define COMPONENT_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>
using namespace std;

class Component{
protected:
    double X, Y;
public:
    double getX() const { return X;}
    double getY() const{ return Y;}

    virtual void printComponent() const{
        cout << "X: " << X << " Y: " << Y << endl;
    }

    virtual DinString& getTypeName() const = 0;
};

#endif // COMPONENT_HPP_INCLUDED
