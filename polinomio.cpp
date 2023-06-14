//Calcular Polinomios de la manera estandar
//Gabriel Jimenez 7182 - Jose Bonilla 7246
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, a, x;
    int solucion = 0;
    int polinomio(int n ,int x);
    cout << "Ingrese el grado del polinomio: " << endl;
    cin >> n;
    cout << "Ingrese el valor de x: " << endl;
    cin >> x;
    cout << "El resultado es: " << endl << polinomio(n,x) << endl;
    return 0;
}

int polinomio(int n, int x){
    int a;
    int solucion = 0;
    for(int i = 0; i <= n; i++){
        cout << "Ingrese el valor de a" << i << ": " << endl;
        cin >> a;
        solucion = solucion + (a * pow(x,i));
    }
    return solucion;
}