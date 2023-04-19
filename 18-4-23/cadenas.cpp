#include <iostream>
#include <cstring>
#define EXT 15

using namespace std;

bool esPalindromo(char vector[], int start, int end) {
    if (start >= end) {
        return true;
    }
    if (vector[start] != vector[end]) {
        return false;
    }
    return esPalindromo(vector, start+1, end-1);
}

void pasarAPalabras(char vector[], char p[][EXT], int * nPalabras){
    int i, j = 0, k = 0;
    for(i = 0; i < strlen(vector); i++){
        if((vector[i] > 'A' && vector[i] <= 'Z') || (vector[i] > 'a' && vector[i] <= 'z')){
            p[j][k] = vector[i];
            k++;
        }else{
            p[j][k] = '\0';
            j++;
        }
    }
}

int main() {
    char vector[EXT];
    char palabras[EXT/2][EXT];
    int nPalabras;

    cout << "Ingresa los caracteres del arreglo: ";
    cin.getline(vector, EXT);
    int start = 0;
    int end = strlen(vector) - 1;

    pasarAPalabras(vector, palabras, &nPalabras);

    for(int i = 0; i < nPalabras; i++){
        if (esPalindromo(palabras[i], start, end)) {
            cout << "La palabra: " << palabras[i] <<" es un palindromo" << endl;
        } else {
            cout << "La palabra: " << palabras[i] <<" no es un palindromo" << endl;
        }
    }

    return 0;
}