#include <iostream>
#include <math.h>

using namespace std;

float fn(float x){
    return pow(x, 2) - 2;
}

int main(){

    float a, b, h;
    
    cout << "Ingrese los intervalos de busqueda" << endl;
    cout << endl << "[a] >> ";
    cin >> a;
    cout << endl << "[b] >> ";
    cin >> b;

    cout << endl << "Ingrese el paso [h] " << endl;
    cin >> h;

    int auxiliar = 0;
    float x1 = a, x2 = a + h, signo;

    do{
        signo = fn(x1) * fn(x2);
        if(signo > 0){
            x1 = x2;
            x2 = x1 + h;
        }else{
            cout << endl << "La solucion en el intervalo: " << "[" << a << " , "<< b << "]"  << "  es aproximadamente : " << (x1 + x2) / 2 << endl; 
            cout << endl << "Con error maximo de: " << h/2 << endl;
            auxiliar = 1; 
        }
    }while(auxiliar == 0 && x2 <= b);

    if(auxiliar == 0){
        cout << "El valor no se encontro" << endl;
    }
    return 0;
}