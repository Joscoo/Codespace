//Jose Bonilla - 7246
//Algoritmo para encontrar el cero de la maquina

#include <iostream>

using namespace std;

int main(){
    double x = 1;
    int i = 0;
    double z;
    do{
        x = x / 2;
        z = x + 1;
        i++;
    }while(z > 1);
    cout << "El cero de la maquina es: " << x << endl;
    cout << "El numero de iteraciones es: " << i << endl;
    return 0;
}