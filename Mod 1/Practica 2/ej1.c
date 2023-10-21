/*Escriba un programa que genere 50 números enteros en forma pseudoaleatoria y que los almacene en un arreglo
unidimensional. Luego de realizada la carga, informar la cantidad de números pares que se encuentran en posiciones
impares del arreglo y también la cantidad de números impares que se encuentran en posiciones pares. */
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    const int dimf = 50;
    int vector[dimf],cantParesEnImpar=0,cantImparesEnPar=0;
    for (int i=0;i<dimf;i++){
        vector[i]=(rand()%100);
        printf("%d\n",vector[i]);
    }
    for (int i=0;i<dimf;i++){
        if((i%2!=0)&&(vector[i]%2==0)) cantParesEnImpar++;
        if((i%2==0)&&(vector[i]%2!=0)) cantImparesEnPar++;
    }
    printf("Cantidad de numeros pares en posiciones impares: %d\n",cantParesEnImpar);
    printf("Cantidad de numeros impares en posiciones pares: %d\n",cantImparesEnPar);
    return 0;
}
