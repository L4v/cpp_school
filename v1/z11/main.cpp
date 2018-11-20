#include <iostream>

using namespace std;

int main()
{
    int maxNum = 0, x;
    do{
        cout << "0-prekid" << endl;
        cin >> x;
        if (x > maxNum)
            maxNum = x;
        cout << "Max input " << maxNum << endl;
    }while(x != 0);
    return 0;
}
