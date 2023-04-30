//Ingresar tres números, y proceder a ordenarlos (ascendente o descendentemente, de acuerdo a lo requerido por el usuario)
// Jose Bonilla - 7246

#include <iostream>
#define EXT 3
using namespace std;

int leerNumero(){
    int numero;
    cout << "Ingrese un numero entero positivo " << endl;
    cin >> numero;
    return numero;
}

void quicksort(int *vector, int inicio, int fin) {
    if (inicio < fin) {
        int pivote = vector[inicio];
        int i = inicio;
        int j = fin;
        while (i < j) {
            while (vector[i] <= pivote && i < fin) {
                i++;
            }
            while (vector[j] > pivote) {
                j--;
            }
            if (i < j) {
                swap(vector[i], vector[j]);
            }
        }
        swap(vector[inicio], vector[j]);
        quicksort(vector, inicio, j - 1);
        quicksort(vector, j + 1, fin);
    }
}


int leerNumeroConLimites(int inf, int sup){
    int numero;
    cout << "Ingrese un numero entre : " << inf << " y " << sup << endl;
    cin >> numero;
    if(numero < inf || numero > sup){
        leerNumeroConLimites(inf, sup);
    }
    return numero;
}

void imprimirVectorRecursivamente(int *vector, int n, int index) {
    if (index == n) {
        return;
    }
    cout << vector[index] << endl;
    imprimirVectorRecursivamente(vector, n, index + 1);
}

void imprimirInversamente(int vector[], int n) {
    if(n == 0) {
        return;
    }
    cout << vector[n-1] << endl;
    imprimirInversamente(vector, n-1);
}



int main(){
    system("color 02");
    int numeros[3];
    int opc;
    numeros[0] = leerNumero();
    numeros[1] = leerNumero();
    numeros[2] = leerNumero();


    cout << "Ascendentemente o Descendentemente?" << endl;
    cout << "1. Ascendete || 2. Descendente" << endl;
    opc = leerNumeroConLimites(1,2);    
    quicksort(numeros, 0, EXT - 1);
    switch(opc){
        case 1:
            imprimirVectorRecursivamente(numeros, EXT, 0);
        break;
        case 2:
            imprimirInversamente(numeros, EXT);
        break;
    }

    system("pause");
    return 0;
}




