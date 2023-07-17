//Programa que calcula la ecuacion de una recta tangente a una curva en un punto dado
//Jose Bonilla - 7246

#include <iostream>
#include <cmath>
using namespace std;

float fn (float x){
    return pow(3,x) + pow(x,2) - 1;
}


float dfn(float x){
    return (fn(x+0.0001)-fn(x))/0.0001;
}


int main (){
    float x0, m, y0, b;

    cout<<"Ingrese el punto x0 " << endl;
    cin>>x0;

    y0=fn(x0);
    m=dfn(x0);
    b = y0-m*x0;

    cout<<"La ecuacion de la recta tangente en los puntos: (" << x0 << "," << y0 << ") es: " << "y = " << m << "x + (" << b << ")" << endl; 
    cout<<"La ecuacion de la recta normal en los puntos: (" << x0 << "," << y0 << ") es: " << "y = " << -1/m << "x + " << y0+(1/m)*x0 << endl; 
    
    return 0;
}