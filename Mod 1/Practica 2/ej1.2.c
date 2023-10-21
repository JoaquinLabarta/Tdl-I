/*Rehaga el ejercicio 2 de la sección Arreglos Estáticos, pero en este caso escribiendo una única función que retorne los 3
valores pedidos. Promedio, minimo, posMax*/
#include <stdio.h>
void retornarTodo(int [],int,float *,int *,int *); //defino prototipo funcion
int main(){
    const int dimf = 5;
    int vector[dimf]; //declaro vector
    //declaro punteros
    float *ptrProm;
    int *ptrMin,*ptrPosMax;
    //creo lugar para punteros
    float prom=0;
    int min=9999;
    int posMax=-1;
    //doy valor a los punteros
    ptrProm=&prom;
    ptrMin=&min;
    ptrPosMax=&posMax;
    /*---------------------------------------------------------*/
    for (int i=0;i<dimf;i++){
        printf("Ingrese un numero para la posicion %d\n",i);
        scanf("%d",&vector[i]);
    }
    retornarTodo(vector,dimf,ptrProm,ptrMin,ptrPosMax);
    //datos obtenidos de la funcion
    printf("El numero mas chico es: %d, el promedio es: %.2f, la posicion del maximo es: %d",*ptrMin,*ptrProm,*ptrPosMax);
    return 0;
}

void retornarTodo(int vector[],int dimf,float *ptrProm,int *ptrMin,int *ptrPosMax)
{
    int sumaTotal=0;
    int max=-1;
    for (int i=0;i<dimf;i++){
        sumaTotal+=vector[i];
        if(vector[i]<*ptrMin) *ptrMin=vector[i];
        if(vector[i]>max){
            max=vector[i];
            *ptrPosMax=i;
        }
    }
    *ptrProm= (sumaTotal/(float) dimf);
}
