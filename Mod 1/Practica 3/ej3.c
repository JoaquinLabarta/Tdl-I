#include <stdio.h>
#include <string.h>
struct direccion
{
    char calle[50];
    char ciudad[30];
    int cod;
    char pais[40];
};

struct alu
{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    struct direccion domicilio;
};

typedef struct alu alumno;
void recibirAlumno(alumno *,char[], char[], char[], float, char[], char[], int, char[]);
void mejorProm(alumno *,char[],char[]);
int main()
{
    char apellido[50],nombre[50],legajo[8],calle[50],ciudad[30],pais[40];
    int cod;
    float promedio;
    alumno vec[30];
    for (int i=0; i<3; i++){
        printf("Carga del alumno: %d\n",i+1);
        printf("Ingrese el apellido del alumno\n");
        scanf("%s",apellido);
        printf("Ingrese el nombre del alumno\n");
        scanf("%s",nombre);
        printf("Ingrese el legajo del alumno\n");
        scanf("%s",legajo);
        printf("Ingrese el promedio del alumno\n");
        scanf("%f",&promedio);
        printf("Ingrese la calle del alumno\n");
        scanf("%s",calle);
        printf("Ingrese la ciudad del alumno\n");
        scanf("%s",ciudad);
        printf("Ingrese el codigo postal del alumno\n");
        scanf("%d",&cod);
        printf("Ingrese el pais del alumno\n");
        scanf("%s",pais);
        recibirAlumno(&vec[i],apellido,nombre,legajo,promedio,calle,ciudad,cod,pais);
    }
    char mejorNombre[50];
    char mejorApellido[50];
    mejorProm(vec,mejorNombre,mejorApellido);
    printf("El alumno con mejor promedio es: %s %s\n",mejorNombre,mejorApellido);
    return 0;
}

void recibirAlumno(alumno *a,char apellido[], char nombre[], char legajo[], float promedio, char calle[], char ciudad[], int cod, char pais[])
{
    strcpy(a->apellido,apellido);
    strcpy(a->nombre,nombre);
    strcpy(a->legajo,legajo);
    a->promedio=promedio;
    strcpy(a->domicilio.calle,calle);
    strcpy(a->domicilio.ciudad,ciudad);
    a->domicilio.cod=cod;
    strcpy(a->domicilio.pais,pais);
}

void mejorProm(alumno *a, char nombre[], char apellido[])
{
    float max=-1;
    for (int i=0; i<3; i++){
        if (a[i].promedio>max){
            max=a[i].promedio;
            strcpy(nombre,a[i].nombre);
            strcpy(apellido,a[i].apellido);
        }
    }
}