/*Determinar las letras más repetidas encontradas en una cadena ingresada (evitar repeticiones)*/
// Jose Bonilla - 7246

#include <iostream>
#include <string>
using namespace std;

void contarLetras(string cadena, int contador[], int i = 0) {
    if(i == cadena.size()){
        return;
    }
    if(isalpha(cadena[i])){
        contador[tolower(cadena[i]) - 'a']++;
    } 
    contarLetras(cadena, contador, i + 1);
}

int main() {

    system("color 02");


    string cadena;
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);
    int contador[26] = {0};
    contarLetras(cadena, contador);
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (contador[i] > max) max = contador[i];
    }
    for (int i = 0; i < 26; i++) {
        if (contador[i] == max){
            cout << "La letra mas repetida es: " << char(i + 'a') << " " << endl;
        }
    }

    system("pause");
    return 0;
}