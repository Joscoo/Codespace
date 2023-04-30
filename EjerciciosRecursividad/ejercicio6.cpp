//Generalice la solución al problema anterior
// Jose Bonilla - 7246

#include <iostream>
#include <cmath>
using namespace std;


void puntosCircunferencia(int x, int r) {
    if (x > r) return;
    int y = round(sqrt(r*r - x*x)); 
    if (x*x + y*y == r*r) { 
        cout << "(" << x << "," << y << ")" << endl; 
        if (x != 0){
            cout << "(" << -x << "," << y << ")" << endl;
        } 
        if (y != 0){
            cout << "(" << x << "," << -y << ")" << endl;
        } 
        if (x != 0 && y != 0){
            cout << "(" << -x << "," << -y << ")" << endl; 
        }
    }
    puntosCircunferencia(x+1, r);
}

int main() {
    system("color 02");

    int r;
    cout << "Introduce el radio de la circunferencia: " << endl;
    cin >> r;    
    puntosCircunferencia(-r, r); 
    system("pause");
    return 0;
}