#include <iostream>

using namespace std;

int leerN(){
    int n;
    cout << "Ingrese un valor positivo" << endl;
    cin >> n;
    if(n < 1){
        n = leerN();
    }
    return n;
}