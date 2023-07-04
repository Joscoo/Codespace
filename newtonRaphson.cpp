#include <iostream>
#include <cmath>

using namespace std;

float fn(float x){
    return pow(2,x) + x - 2;
}

float dfn(float x){
    return pow(2,x) * log(2) + 1;
}

int main(){

    float x0;

    cout << "Ingrese el valor inicial" << endl;
    cin >> x0;

    float x1,d;
    int n = 0;

    do{
        x1 = x0 - fn(x0)/dfn(x0);
        cout << "x" << n + 1 << " = " << x1 << endl;
        d = abs(x1-x0);
        x0 = x1;
        n++;
    }while(d > 0.001 && n < 20);

    if(n < 20){
        cout << "La raiz es: " << x1 << endl;
        cout << "Numero de iteraciones: " << n << endl;
    }else{
        cout << "No encontro raiz" << endl;
    }

    return 0;
}