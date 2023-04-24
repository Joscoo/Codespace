//Programa que permite individualizar los digitos de cada numero entero ingresado
//Jose Bonilla - 7246

#include <iostream>
using namespace std;
#include "utilities.h"

void ingresoVector(int vec[], int n){}

int main(){
    //VARIABLES
    int n;
    int mayorTodos = 0;
    //PROTOTIPOS
    void ingresarNumeros(int n, int *mayor);
    //CODIGO
    n = leerN();
    ingresarNumeros(n, &mayorTodos);
    cout << "El digito mayor de todos es: " << mayorTodos << endl;

    return 0;
}


void ingresarNumeros(int n, int *mayorTodos){
    int num;
    int digitoMayor;
    void individualizarDigitos(int numero, int *digitoM);
    if(n > 0){
        cout << endl << "Ingrese un numero" << endl;
        cin >> num;
        digitoMayor = 0;
        if(num == 0){
            cout << endl << "||" << "0" << "||" << endl;
        }else{
            individualizarDigitos(abs(num), &digitoMayor);
        }    
        cout << "El digito mayor es: " << digitoMayor << endl;
        if(digitoMayor > *mayorTodos){
            *mayorTodos = digitoMayor;
        }
        ingresarNumeros(n = n - 1, mayorTodos);
    }
}

void individualizarDigitos(int numero, int *digitoM){
    int digito;
    if(numero != 0){
        digito = numero % 10;
        individualizarDigitos(numero / 10, digitoM);
        cout << endl << "||" << digito << "||" << endl;
        if(digito > *digitoM){
            *digitoM = digito;
        }
    }
}


