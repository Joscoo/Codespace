using namespace std;

#include <iostream>
#include "nodoBinario.h"

int main(){
    system("color 02");

    NodoBinario n1(100);
    NodoBinario n2(200);
    NodoBinario n3(300, &n1, &n2);

    NodoBinario* act;
    act = &n3;

    cout << endl << "Valor almacenado: " << act->getDato() << endl;

    act = n3.getIzq();

    cout << endl << "Valor almacenado: " << act->getDato() << endl;

    act = n3.getDer();

    cout << endl << "Valor almacenado: " << act->getDato() << endl;

    cout << endl << "Nodo 1:" << n1.getDato() << endl;
    cout << endl << "\t" << "> " <<n1.getIzq() << endl;
    cout << endl << "\t" << "> " <<n1.getDer() << endl;
    cout << endl << "Nodo 2:" <<  n2.getDato() << endl;
    cout << endl << "\t" << "> " <<n2.getIzq() << endl;
    cout << endl << "\t" << "> " <<n2.getDer() << endl;
    cout << endl << "Nodo 3:" << n3.getDato() << endl;
    cout << endl << "\t" << "> " << n3.getIzq() << endl;
    cout << endl << "\t" << "> " << n3.getDer() << endl;

    cout << endl;
    system("pause");
    return 0;
}