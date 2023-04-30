/*Generalizar la solución anterior*/
//Jose Bonilla - 7246

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void imprimirTablaRecursiva(double i, double fin, double incremento) {
    if (i > fin + incremento) {
        return;
    }
    
    double raiz = sqrt(i);
    cout << fixed << setprecision(3);
    cout << setw(10) << i << setw(15) << raiz << endl;

    imprimirTablaRecursiva(i + incremento, fin, incremento);
}

float leerNumero(){
    float numero;
    cout << "Ingrese un numero " << endl;
    cin >> numero;
    return numero;
}

float leerNEnteroPositivo(){
    float numero;
    cout << "Ingrese un numero entero positivo " << endl;
    cin >> numero;
    if(numero < 0){
        leerNEnteroPositivo();
    }
    return numero;
}

int main() {    

    system("color 02");
    double inicio;
    double fin; 
    double incremento;

    cout << "Ingrese el valor de inicio:" << endl;
    inicio = leerNumero();
    cout << "Ingrese el valor final:" << endl;
    fin = leerNumero();
    cout << "Ingrese el incremento" << endl;
    incremento = leerNEnteroPositivo();

    cout << setw(10) << "Valor" << setw(15) << "Raiz cuadrada" << endl;
    cout << setw(26) << setfill('-') << "" << endl;
    cout << setfill(' ');

    imprimirTablaRecursiva(inicio, fin, incremento);

    system("pause");
    return 0;
}
