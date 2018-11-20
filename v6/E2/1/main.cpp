#include "artikal.hpp"

int Artikal::brojObjekata = 10;


int main()
{
    Artikal a1("Milka sa lesnikom 150gr", 142.23);
    cout << a1;

    DinString d1("Next jabuka 1l");
    Artikal a2(d1, 110);



    Artikal a3("Nesto", 456);




    return 0;
}
