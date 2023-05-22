//Algoritmo de Euclides para encontrar el MCD de dos numeros
//Jose Bonilla - 7246
#include <iostream>

using namespace std;

int main(){
    int a, b, r;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "El MCD entre: " << a << " y " << b << endl;


    if(b>a){
        int temp = a;
        a = b;
        b = temp;
    }

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    cout << "Es: " << a << endl;
    return 0;
}