#include <iostream>

using namespace std;

int prestupna(int god){
    return
        god % 4 == 0 ?
            god % 100 == 0 ?
                god % 400 == 0 ? 1 : 0
                : 1
        : 0;
}

int main()
{
    int god;
    cout << "UNETI GODINU" << endl;
    cin >> god;

    prestupna(god) == 1 ? cout << "DA" : cout << "NE";
    return 0;
}
