#ifndef BOARD_HPP_INCLUDED
#define BOARD_HPP_INCLUDED
#include "component.hpp"

class Board : public Component{
private:
    List<Panele*> panele;
    int cap;
public:
    static DinString typeName;
    Board(const int i) : cap(i){}

    bool addPanela(Panele& c){
        if(panele.size() < cap){
            return panele.add(panele.size() + 1, &c);
        }
        return false;
    }

    bool addToPanela(Component& c, int i){
        Panele* tmp;
        panele.read(i, tmp);
        return tmp->addComponent(c);
    }

    DinString& getTypeName() const { return typeName; }
};



#endif // BOARD_HPP_INCLUDED
