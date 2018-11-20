#ifndef MACHINE_HPP_INCLUDED
#define MACHINE_HPP_INCLUDED

#define MAX_VAL 80
#define MIN_VAL 0
#define STEP 20


enum MachineState{
    sA = 1,
    sB = 2,
    sC = 3,
    sD = 4
};

class Machine{
public:
    Machine();

    bool metodaX();
    bool metodaY();
    bool metodaZ();
    bool metodaW();

    bool plus();
    bool minus();

    MachineState getCurrentState() const;
    int getValue() const;

private:
    MachineState currentState;
    int value;
};

#endif // MACHINE_HPP_INCLUDED
