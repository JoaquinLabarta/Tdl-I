#include <stdio.h>
struct rectangulo
{
    float base,altura;
};
void recibirRectangulo(struct rectangulo *,float,float); //lleva puntero ya que quiero modificar los valores en la variable de tipo struct
float calcularArea(struct rectangulo); 

int main()
{
    float base, altura;
    struct rectangulo r;
    printf("Ingrese la base del rectangulo ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectangulo ");
    scanf("%f",&altura);
    recibirRectangulo(&r,base,altura);
    printf("El area del rectangulo es: %.2f\n",calcularArea(r));
    return 0;
}

void recibirRectangulo(struct rectangulo *r,float base, float altura)
{
    r->base=base;
    r->altura=altura;
}

float calcularArea(struct rectangulo r)
{
    float area = r.base * r.altura;
    return area;
}