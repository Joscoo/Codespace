using namespace std;
#include <iostream>
#include "nodo.h"

int main(){
    system("color 02");
    Nodo n;
    Nodo n1(104);
    Nodo n2(103, &n1);

    n.setDato(105);

    cout << endl << "El valor almacenado en el nodo es : " << n.getDato() << endl;
    cout << endl << "El valor al que apunta el nodo es : " << n.getPunt() << endl;
    cout << endl << "El valor almacenado en el segundo nodo es : " << n1.getDato() << endl;
    cout << endl << "El valor al que apunta el segundo nodo es : " << n1.getPunt() << endl;
    cout << endl << "El valor almacenado en el tercer nodo es : " << n2.getDato() << endl;
    cout << endl << "El valor al que apunta el tercer nodo es : " << n2.getPunt() << endl;
    cout << endl ;

    n1.setPunt(&n);

    Nodo* aux;
    aux = &n2;

    cout << endl << aux->getDato() << endl;
    aux = n2.getPunt();
    cout << endl << aux->getDato() << endl;
    aux = n1.getPunt();
    cout << endl << aux->getDato() << endl;

    system("pause");
    return 0;
}