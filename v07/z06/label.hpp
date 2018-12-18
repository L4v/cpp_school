#ifndef LABEL_HPP_INCLUDED
#define LABEL_HPP_INCLUDED
#include "component.hpp"

class Label : public Component{
private:
    DinString text;
public:
    static DinString typeName;

    Label() :text(""){
        this->X = 0;
        this->Y = 0;
    }

    Label(double X, double Y, const DinString& txt):text(txt){
        this->X = X;
        this->Y = Y;
    }

    DinString& getTypeName() const{ return typeName; }
    void printComponent() const{
        Component::printComponent();
        cout << text << endl;
    }

};

#endif // LABEL_HPP_INCLUDED
