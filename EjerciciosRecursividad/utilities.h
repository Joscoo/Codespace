//Funciones utiles para reutilizar
#include <iostream>
using namespace std;
int leerNEnteroPositivo(){
    int numero;
    cout << "Ingrese un numero entero positivo " << endl;
    cin >> numero;
    if(numero < 0){
        leerNEnteroPositivo();
    }
    return numero;
}

int leerNumero(){
    int numero;
    cout << "Ingrese un numero " << endl;
    cin >> numero;
    return numero;
}

int leerNumeroConLimites(int inf, int sup){
    int numero;
    cout << "Ingrese un numero entre : " << inf << " y " << sup << endl;
    cin >> numero;
    if(numero < inf || numero > sup){
        leerNEnteroPositivo();
    }
    return numero;
}

int calcularFactorial(int numeroCalcular){
    if(numeroCalcular == 0){
        return 1;
    }else{
        return numeroCalcular * calcularFactorial(numeroCalcular-1);
    }
}

int ordenarDosNumeros(int valorA, int valorB){
    int aux;
    if(valorA > valorB){
        aux = valorA;
        valorA = valorB;
        valorB = aux;
        return valorA;
        return valorB;
    }else{
        return valorA;
        return valorB;
    }
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

void imprimirVectorRecursivamente(int *vector, int n, int index) {
    if (index == n) {
        return;
    }
    cout << vector[index] << endl;
    imprimirVectorRecursivamente(vector, n, index + 1);
}