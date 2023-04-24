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
        }else {
            if((vector[i - 1] > 'A' && vector[i - 1] <= 'Z') || (vector[i - 1] > 'a' && vector[i - 1] <= 'z')){
                p[j][k] = '\0';
                j++;
                k = 0;
            }
        }
    }
    p[j][k] = '\0';
    *nPalabras = j + 1;
}

int main() {
    char vector[EXT];
    char palabras[EXT/2][EXT];
    int nPalabras;

    cout << "Ingresa la palabra: ";
    cin.getline(vector, EXT);

    pasarAPalabras(vector, palabras, &nPalabras);

    for(int i = 0; i < nPalabras; i++){
            cout << "La palabra: " << palabras[i] << (esPalindromo(palabras[i], 0, (strlen(palabras[i]) - 1) )? " SI " : " NO ") << " es un palindromo" << endl;
    }
    return 0;
}