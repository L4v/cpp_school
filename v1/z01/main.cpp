#include <iostream>
#include <unistd.h>

using namespace std;

void fun();

void fun(){
    char a = 'a';
    while(1){
        for(int i = 0; i < 16; i ++){
            for(int j = 0; j < 16; j ++){
                cout << a;
                usleep(5000);
            }
            cout << endl;
        }
        a ++;

        if(a == 'z')
            a = 'a';
    }
}

int main()
{
    int n, sum = 0, x;
    cout << "Koliko brojeva sabirate?" << endl;
    cin >> n;
    if(n == 0)
        fun();
    else{
        for (int i = 0; i < n; i ++){
            cout << "Unesite broj" << endl;
            cin >> x;
            sum += x;
        }
        cout << "Suma je " << sum;
    }
    return 0;
}
