// 1. Calcular el Factorial de cada número ingresado
// Jose Bonilla - 7246

#include <iostream>
#include "utilities.h"
using namespace std;

int main(){
    system("color 02");
    int numero = leerNEnteroPositivo();
    int factorial(int n);
    long int resultado = factorial(numero);
    cout << "El factorial de: " << numero << " es: " << resultado << endl;
    system("pause");
    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}


