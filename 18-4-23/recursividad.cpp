#include <iostream>
using namespace std;

int main(){
    void generarMinusculas(char mayus);
    generarMinusculas('A');
    return 0;
}


void generarMinusculas(char mayus){
    if(mayus <= 'Z'){
        char minus = mayus + 32;
        cout << mayus << minus << endl;
        generarMinusculas(mayus + 1);
    }
}
