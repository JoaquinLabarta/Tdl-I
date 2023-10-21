/* Escriba un programa que lea 2 n�meros enteros y un car�cter, el cual debe corresponderse con un operador matem�tico (+, -, /, x),
y a partir de ellos imprima el resultado de realizar la operaci�n pedida en pantalla. En caso de que el car�cter no represente
un operador v�lido, imprima un mensaje de error. Reflexione sobre las diferentes estructuras de control que puede utilizar. */
#include <stdio.h>
int main(){
    int nro1,nro2;
    char ope;
    printf("Ingrese el primer numero \n");
    scanf("%d",&nro1);
    printf("Ingrese el segundo numero \n");
    scanf("%d",&nro2);
    scanf("%c", &ope);
    printf("Ingrese el operador \n");
    scanf("%c",&ope);
    switch (ope){
        case '+': printf("El resultado de la suma es: %d \n", nro1+nro2); break;
        case '-': printf("El resultado de la resta es: %d \n", nro1-nro2); break;
        case '*': printf("El resultado de la multiplicacion es: %d \n", nro1*nro2); break;
        case '/':
            if (nro2 != 0) {
                float res = (float) nro1/nro2;
                printf("el resultado de la division es: %.2f \n",res);
            }
            else printf("No se puede dividir por cero \n");
            break;
    }
    return 0;
}
