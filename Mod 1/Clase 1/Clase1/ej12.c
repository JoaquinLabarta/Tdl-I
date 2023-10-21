/*Escriba un programa que imprima la ra�z cuadrada, el cuadrado y el cubo de los n�meros enteros comprendidos en el rango 1..10.
Nota: para calcular la ra�z cuadrada y la potencia de un n�mero investigue las funciones sqrt() y pow(), ambas de la librer�a <math.h>. */
#include <stdio.h>
#include <math.h>
int main(){
    int cuadrado;
    float cubica,raiz;
    for (int i=1;i<=10;i++){
        printf("El cuadrado de %d ",i);
        cuadrado=pow(i,2);
        printf(" es: %d \n",cuadrado);
        //----------------------------------
        printf("La raiz cuadrada de %d ",i);
        raiz=sqrt(i);
        printf(" es: %f \n",raiz);
        //----------------------------------
        printf("La raiz cubica de %d ",i);
        cubica=pow(i,(double)1/3);
        printf(" es: %.2f \n",cubica);
    }
    return 0;
}
