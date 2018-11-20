#include <iostream>
#include "student.hpp"


using namespace std;

int main()
{
    Student st;
    Student st2 = Student(st);
    st2.predstaviSe();

    return 0;
}
