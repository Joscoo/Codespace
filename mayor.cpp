//Programa que calcula el mayor de dos numeros
//Jose Bonilla - 7246

#include <iostream>         /*Esta línea incluye la biblioteca iostream, que proporciona las funciones de entrada y 
salida estándar en C++, como cout y endl.*/

using namespace std;        /*Esta línea indica que se utilizará el espacio de nombres estándar (std). 
Esto evita tener que usar el prefijo std:: antes de las funciones y objetos de la biblioteca estándar, como cout y endl.*/


int main(){     //Aquí comienza la función principal main, que es el punto de entrada del programa.
    float numero1, numero2; // Declara dos variables de tipo float llamadas numero1 y numero2 para almacenar los números ingresados por el usuario.
    if(numero1 == numero2){ // Comienza una declaración if que verifica si numero1 es igual a numero2.
        cout << "El: " << numero1 << " es igual que: " << numero2 << endl; /*Si la condición del if es verdadera, se imprime
        en la consola el mensaje "El: " seguido del valor de numero1, luego " es igual que: " y finalmente el valor de numero2. El endl se utiliza para agregar una nueva línea después de imprimir el mensaje.*/
    }else if(numero1 > numero2){ //Si la condición del if anterior es falsa, se verifica si numero1 es mayor que numero2.
        cout << "El: " << numero1 << " es mayor que: " << numero2 << endl;/*: Si la condición del else if es verdadera, 
        se imprime en la consola el mensaje "El: " seguido del valor de numero1, luego " es mayor que: " y finalmente el valor de numero2.*/
    }else{/*: Si ninguna de las condiciones anteriores es verdadera, se ejecuta este bloque else, 
    lo que significa que numero2 debe ser mayor que numero1.*/
        cout << "El: " << numero2 << " es igual que: " << numero1 << endl;     /*cout << "El: " << numero2 << " es mayor que: " << numero1 << endl;: Se imprime en la consola el mensaje 
        "El: " seguido del valor de numero2, luego " es mayor que: " y finalmente el valor de numero1*/   
    }
    return 0; //Finaliza la función main y devuelve el valor 0, lo que indica que el programa se ejecutó correctamente.
}