//Jose Bonilla - 7246
#include <iostream>
using namespace std;


int main(){
    //Variables
    int n; // Cantidad de valores a calcular

    //Prototipos de funcion
    void potenciacion(int n);
    int leerN();

    //Código
    n = leerN();

    potenciacion(n);

    return 0;
}

int leerN(){
    int n;
    cout << "Ingrese un valor positivo" << endl;
    cin >> n;
    if(n < 0){
        n = leerN();
    }
    return n;
}

void potenciacion(int n){
    int sumaInterna(int a, int resul, int auxA);
    int sumaTotal(int resul, int almacenador, int ciclos);
    if(n > 0){
        cout << "Base: "<< endl;
        int a = leerN();
        cout << "Exponente: " << endl;
        int b = leerN(); 
        if(b == 1){
            cout << "Resultado: " << a << endl;        
        }else if(b == 0){
            cout << "Resultado: " << 0 << endl;        
        }else{           
            int resulInterno, resulTotal;
            resulInterno = sumaInterna(a, 0, a);
            resulTotal = sumaTotal(resulInterno, 0, b - 1);
            cout << "Resultado: " << resulTotal << endl;        
            potenciacion(n - 1);
        }
    }
}


int sumaInterna(int a, int resul, int auxA){
    if (auxA > 0){
        resul = resul + a ; 
        sumaInterna(resul, resul, auxA - 1);
    }else{
        return resul;
    }
}

int sumaTotal(int resul, int almacenador, int ciclos){
    if(ciclos > 0){
        almacenador = almacenador + resul;
        sumaTotal(resul, almacenador, ciclos-1);
    }else{
        return almacenador;
    }
}

