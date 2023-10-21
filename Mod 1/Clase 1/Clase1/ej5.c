/* Escriba un programa que imprima en pantalla todos los n�meros enteros m�ltiplos de 5 comprendidos entre 1 y 50.
Realice dos soluciones con las siguientes caracter�sticas: a. Utilizando el operador % para determinar cu�ndo un n�mero es
m�ltiplo de 5. b. Utilizando un for donde la variable �ndice se incremente en 5 unidades por cada iteraci�n. */

#include <stdio.h>
int main(){
    int res;
/*Solucion 1*/
    for (int i=1; i<50; i++){
        if (i%5 == 0) printf("El numero %d es multiplo de 5 \n",i);
    }
/*Solucion 2*/
    for (int i=5; i<50; i+=5){
        printf ("El numero %d es multiplo de 5 \n",i);
    }
}
