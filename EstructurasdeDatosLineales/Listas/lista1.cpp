using namespace std;
#include <iostream>
#include "lista.h"
#define EXT 99999

int main(){
    system("color 02");
    Lista l;
    void ingresarLista(Lista *l1);
    void mostrarLista(Lista l1);

    cout << endl << "El valor apuntado en el primer nodo es : " << l.getPrimero() << endl;
    cout << endl << "La lista" << (l.esVacia() ? " si " :  " no ") <<  "esta vacia"  << endl;

    cout << "Valores a ingresar en la lista : " << endl; 
    ingresarLista(&l);

    system("pause");
    return 0;
}

void ingresarLista(Lista *l1){
    Tipo aux;

    cout << endl << "Ingrese un valor para la lista (" << EXT << " para terminar) : " << endl; 
    cin >> aux;
    
    if(aux != EXT){
        l1->insertarInicio(aux);
        ingresarLista(l1);
    }

}
