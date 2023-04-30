/*Generar los N valores múltiplos de X. Calcular el promedio de aquellos valores generados que estén 
dentro del rango comprendido entre A y B; si no están en ese rango, los valores solo deberán imprimirse.*/
// Jose Bonilla - 7246
#include <iostream>
#include "utilities.h"

using namespace std;

void multiplos(int x, int n, int a, int b, int &contador, int &sum) {
    if(n == 0) {
        return;
    }
    int num = x * n;
    if(num >= a && num <= b) {
        cout << num << endl;        
        contador++;
        sum += num;
    }
    else {
        cout << num << endl;
    }
    multiplos(x, n-1, a, b, contador, sum);
}

int main() {

    system("Color 02");

    int x, n, a, b, contador = 0, sum = 0;
    cout << "Ingrese el valor de x: " << endl;  
    x = leerNEnteroPositivo();
    cout << "Ingrese el valor de n: " << endl;
    n = leerNEnteroPositivo();
    cout << "Ingrese el valor de a: " << endl;
    a = leerNEnteroPositivo();
    cout << "Ingrese el valor de b: " << endl;
    b = leerNEnteroPositivo();

    multiplos(x, n, a, b, contador, sum);
    if(contador > 0) {
        cout << "Promedio: " << (float)sum/contador << endl;
    }

    system("Pause");
    return 0;
}
