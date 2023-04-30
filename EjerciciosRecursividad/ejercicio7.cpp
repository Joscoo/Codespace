/*Imprimir solamente el N-ésimo dígito fraccionario de cada numero
real (posee parte entera y parte fraccionaria) ingresado.*/
// Joe Bonilla - 7246

#include<iostream>
using namespace std; 


int conseguirDigito(double num, int n){
    num = num - (int)num;
    if(n == 0){
        return (int)(num * 10) % 10;
    }else{
        return conseguirDigito(num * 10, n - 1);
    }
}

int main(){

    system("color 02");


    double num;
    int n;

    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese el n-esimo digito fraccionario deseado: ";
    cin >> n;

    int digito = conseguirDigito(num, n-1);
    cout << "El " << n << "-esimo digito fraccionario de " << num << " es " << digito << endl;

    system("pause");

    return 0;
}
