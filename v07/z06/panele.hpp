#ifndef PANELE_HPP_INCLUDED
#define PANELE_HPP_INCLUDED
#include "component.hpp"
#include "list.hpp"

class Panele : public Component{
private:
    int capacity;
    List<Component*> components;
public:
    static DinString typeName;

    Panele():capacity(10){
        this->X = 0;
        this->Y =0;
    }
    Panele(const Panele& p):capacity(p.capacity){
        this->X = p.X;
        this->Y = p.Y;
        }

    DinString& getTypeName() const{ return typeName; }

    void printComponent() const{
        Component::printComponent();
        Component* tmp;
        for(int i = 0; i < components.size(); i ++){
            components.read(i + 1, tmp);
            tmp->printComponent();
        }
    }

    bool addComponent(Component& c){
        if(components.size() < capacity){
            components.add(components.size() + 1, &c);
            return true;
        }
        return false;
    }

    bool removeComponent(int i){
        if(components.remove(i))
            return true;
        return false;
    }

};

#endif // PANELE_HPP_INCLUDED
