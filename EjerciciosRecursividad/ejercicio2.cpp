// Generar el área de los círculos cuyo radio está comprendido entre los valores A y B
// Jose Bonilla - 7246

#include <iostream>
#include "utilities.h"
#define Pi 3.1416
using namespace std;

int main(){
    system("color 02");
    int a = leerNEnteroPositivo(); 
    int b = leerNEnteroPositivo();


    void areaCirculo(int a, int b);

    ordenarDosNumeros(a, b);
    cout << "Area de circulo entre radios de: " << a << " y " << b << endl;
    cout << endl;
    areaCirculo(a, b);
    
    system("pause");
    return 0;
}

void areaCirculo(int a, int b){
    if(a == b){
        cout << "\n" << Pi * b * b << endl;;
    }else{
        cout << "\n" << Pi * a * a << endl;
        areaCirculo(a + 1, b);
    }
}
