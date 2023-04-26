#include <iostream>
#include "tda.h"

using namespace std;

int main(){
    Vector v;
    int n;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;
    v.setN(n);
    for (int i = 0; i < v.getN(); i++){
        cout << "Ingrese el elemento " << i << ": ";
        cin >> n;
        v.setA(n, i);
    }
    cout << "Los elementos del vector son: " << endl;
    for (int i = 0; i < v.getN(); i++){
        cout << v.getA(i) << " ";
    }
    cout << endl;
    return 0;
}