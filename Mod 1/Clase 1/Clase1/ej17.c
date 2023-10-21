/*Escriba una funci�n que reciba como argumento un n�mero entero n y que dentro de ella lea n n�meros flotantes desde teclado.
La funci�n debe retornar el m�nimo y el m�ximo n�mero le�do.*/
#include <stdio.h>
void flotantes(int,float *,float *);
int main(){
    int n;
    float max=-1,min=9999;
    printf("Ingrese un valor: \n");
    scanf("%d",&n);
    flotantes(n,&max,&min);
    printf("El valor maximo es: %f, el minimo es: %f\n",max,min);
    return 0;
}
void flotantes(int n,float * max,float * min){
    float num;
    for (int i=1;i<=n;i++){
        printf("Ingrese el numero: %d\n",i);
        scanf("%f",&num);
        if (num>*max){
            *max=num;
        }
        if (num<*min){
            *min=num;
        }
    }
}
