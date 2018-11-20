#ifndef NIZ_HPP_INCLUDED
#define NIZ_HPP_INCLUDED

#include <iostream>
using namespace std;

template <class T, int D>
class Niz {
    private:
        T el[D];
        int brEl;
    public:
        Niz() { brEl=0; }
        ~Niz() {}

        int getBrEl() const { return brEl; }

        T operator[](int i) const { return el[i]; }
        T& operator[](int i) { return el[i]; }

        Niz<T,D>& operator=(const Niz<T,D>& rn){

            for(brEl = 0; brEl < rn.brEl; brEl++)
                el[brEl] = rn.el[brEl];
            return *this;

        }
}

        void printNiz() const {
            cout << "( ";
            for(int i = 0; i < brEl - 1; i++)
                cout << el[i] << ", ";
            cout << el[brEl - 1] << " )" << endl;
        }
        bool insertNiz(const T&){
            if(brEl < D) {
                el[brEl] = t;
                brEl++;
                return true;
            }
            else
                return false;
        }
};

















template <class T, int D>
void Niz<T,D>::printNiz() const

template <class T, int D>
bool Niz<T,D>::insertNiz(const T& t) {
    if(brEl < D) {
        el[brEl] = t;
        brEl++;
        return true;
    }
    else
        return false;
}

template <class T, int D>
bool operator==(const Niz<T,D>& rn1, const Niz<T,D>& rn2) {
    return !(rn1 != rn2);
}

template <class T, int D>
bool operator!=(const Niz<T,D>& rn1, const Niz<T,D>& rn2) {
    return !(rn1 == rn2);
}

#endif // NIZ_HPP_INCLUDED
