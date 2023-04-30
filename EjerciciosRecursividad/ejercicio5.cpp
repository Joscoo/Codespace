//Determinar los puntos de coordenadas enteras que están sobre la circunferencia X^2 + Y^2 = 25
//Jose Bonilla - 7246

#include <iostream>
#include <cmath>
using namespace std;

void puntosCircunferencia(int x, int r) {
    if (x > r){
        return;  
    } 
    int y = sqrt(r*r - x*x);
    if (y*y == r*r - x*x) {
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
    system("Color 02");
    int r = 5;
    puntosCircunferencia(0, r);
    
    system("pause");
    return 0;
}
