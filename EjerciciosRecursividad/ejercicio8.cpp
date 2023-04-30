/*Imprimir la tabla con las raíces cuadradas de los valores comprendidos entre 6.0 y 7.5 con incrementos de 0.001*/
//Jose Bonilla - 7246

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void imprimirTablaRecursiva(double i, const double fin, const double incremento) {
    if (i > fin + incremento) {
        return;
    }
    
    double raiz = sqrt(i);
    cout << fixed << setprecision(3);
    cout << setw(10) << i << setw(15) << raiz << endl;

    imprimirTablaRecursiva(i + incremento, fin, incremento);
}

int main() {    

    system("color 02");
    double inicio = 6.0;
    double fin = 7.5;
    double incremento = 0.001;

    cout << setw(10) << "Valor" << setw(15) << "Raiz cuadrada" << endl;
    cout << setw(26) << setfill('-') << "" << endl;
    cout << setfill(' ');

    imprimirTablaRecursiva(inicio, fin, incremento);

    system("pause");
    return 0;
}
