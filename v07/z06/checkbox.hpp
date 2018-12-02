#ifndef CHECKBOX_HPP_INCLUDED
#define CHECKBOX_HPP_INCLUDED
#include "component.hpp"

class CheckBox : public Component{
private:
    bool pressed;
public:
    static DinString typeName;

    CheckBox() : pressed(false){
        this->X = 0;
        this->Y = 0;
    }
    CheckBox(double X, double Y, bool pressed):pressed(pressed){
        this->X = X;
        this->Y = Y;
    }

    DinString& getTypeName() const { return typeName; }
    void printComponent() const{
        Component::printComponent();
        cout << (pressed == true ? "PRESSED" : "NOT PRESSED") << endl;
    }

    bool getPressed() const{ return pressed; }
    void setPressed(bool press) { pressed = press; }

};

#endif // CHECKBOX_HPP_INCLUDED
