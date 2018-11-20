#include <iostream>

using namespace std;

//a.a = 3, a.b = 6;
//b.a = 1

//a.a + b.b = 8 = a.a;
//a.b + b.a = 5 + 1 = 7 = a.b;
//b.a + a.b = 1 + 6 = 8 = b.a;
//b.b + a.a = 7 + 8 = 16;

// 816916


class A{
public:
    int a;
    static int b;
    
    A(){a=1;}
    
    A(int aa){a = ++b; a+= aa;}
};
int A::b = 2;

int main(){
    A a(3), b;
    a.a += b.b;
    a.b += b.a;
    b.a += a.b;
    b.b += a.a;
    cout << b.a << b.b << a.a << a.b;
    
}
