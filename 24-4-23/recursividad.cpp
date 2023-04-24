//Programa que permite individualizar los digitos de cada numero entero ingresado
//Jose Bonilla - 7246

#include <iostream>

using namespace std;

void ingresoVector(int vec[], int n){}

int main(){
    //VARIABLES
    int n;
    //PROTOTIPOS
    int leerN();
    void ingresarNumeros(int n);
    //CODIGO
    n = leerN();
    ingresarNumeros(n);

    return 0;
}

int leerN(){
    int n;
    cout << "Ingrese un valor positivo" << endl;
    cin >> n;
    if(n < 1){
        n = leerN();
    }
    return n;
}

void ingresarNumeros(int n){
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
        ingresarNumeros(n = n - 1);
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


