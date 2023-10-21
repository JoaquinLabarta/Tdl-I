/*Sea A una matriz con m filas y n columnas y c un número.Escriba una función que reciba una matriz A y un número c, y que retorne
en A la multiplicación escalar cA. */
#include <stdio.h>
#define col 2
void multiplicar(int [][col],int,int,int);
int main(){
    int f,c;
    printf("Ingrese un numero de filas para la matriz\n");
    scanf("%d",&f);
    int m[f][col];
    for (int i=0;i<f;i++){
        for(int j=0;j<col;j++){
            printf("Ingrese un valor para la posicion: fila %d, columna %d\n",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("Ingrese un valor c para multiplicar\n");
    scanf("%d",&c);

    multiplicar(m,col,f,c);

    for (int i=0;i<f;i++){
        for(int j=0;j<col;j++){
            printf("La posicion: fila %d, columna %d quedo con el valor: %d\n",i,j,m[i][j]);
        }
    }
    return 0;
}

void multiplicar(int m[][col],int dimCol,int dimFila,int c){
    for(int i=0;i<dimFila;i++){
        for(int j=0;j<dimCol;j++){
            m[i][j] *= c;
        }
    }
}
