#include <iostream>
#include "panele.hpp"
#include "checkbox.hpp"
#include "label.hpp"

DinString CheckBox::typeName = "CheckBox";
DinString Label::typeName = "Label";
DinString Panele::typeName = "Panel";


using namespace std;

int main()
{
    CheckBox b1, b2(10, 10, false);
    Label l1, l2(20, 20, "TEST");
    Panele p1, p2(p1);

    cout << "CHECKBOXES" << endl;
    b1.printComponent();
    b2.printComponent();

    cout << "LABELS:" << endl;
    l1.printComponent();
    l2.printComponent();

    p1.addComponent(b1);
    p1.addComponent(b2);
    p2.addComponent(l1);
    p2.addComponent(l2);

    cout << "PANELS:" << endl;
    p1.printComponent();
    p2.printComponent();

    cout << "REMOVING FROM PANEL..." << endl;
    p1.removeComponent(1);
    p1.printComponent();

    return 0;
}
