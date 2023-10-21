/*Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
a. retorne el promedio de sus valores.
b. retorne el mínimo de sus valores.
c. retorne la posición del máximo de sus valores.*/
#include <stdio.h>
int main(){
    const int dimf=3;
    float promedio(float [],int), minimo(float[],int);
    int posMax(float[],int);
    float vector[dimf];
    for (int i=0;i<dimf;i++){
        printf("Ingrese un numero\n");
        scanf("%f",&vector[i]);
    }
    printf("El promedio es: %.2f\n",promedio(vector,dimf));
    printf("El minimo es: %.2f\n",minimo(vector,dimf));
    printf("La posicion donde está el numero maximo es: %d\n",posMax(vector,dimf));
    return 0;
}

float promedio(float v[],int dimf){
    float prom=0;
    for (int i=0;i<dimf;i++){
        prom+=v[i];
    }
    prom/=dimf;
    return prom;
}

float minimo(float v[],int dimf){
    float min=99999;
    for (int i=0;i<dimf;i++){
        if(v[i]<min) min=v[i];
    }
    return min;
}

int posMax(float v[],int dimf){
    float max=-1;
    int pos;
    for (int i=0;i<dimf;i++){
        if(v[i]>max){
            max=v[i];
            pos=i;
        }
    }
    return pos;
}
