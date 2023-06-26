//Jose Bonilla - 7246

using namespace std;

#include <iostream>
#include "vertice.h"

int main(){
    system("color 02");
    Vertice v, v2(500), v3(700,3);
    Tipo aux;

    cout << "Ingrese un valor a almacenar" << endl;
    cin >> aux;

    v.setDato(aux);

    cout << "Valor " << v.getDato() << endl;
    cout << "Numero del vertice " << v.getNum() << endl;

    cout << "Valor " << v2.getDato() << endl;
    cout << "Numero del vertice " << v2.getNum() << endl;

    cout << "Valor " << v3.getDato() << endl;
    cout << "Numero del vertice " << v3.getNum() << endl;

    system("pause");
    return 0;
}