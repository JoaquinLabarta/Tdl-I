#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definir los palos de las cartas
#define OROS 0
#define COPAS 1
#define ESPADAS 2
#define BASTOS 3

// Estructura para la carta
typedef struct {
    int numero;
    int palo;
} Carta;

// Estructura para el mazo
typedef struct {
    Carta cartas[50];
    int cantidad;
} Mazo;

// Función para barajar el mazo de cartas
void barajar(Mazo *mazo) {
    srand(time(NULL));
    for (int i = 0; i < mazo->cantidad; i++) {
        int r = i + (rand() % (50 - i));
        Carta temp = mazo->cartas[i];
        mazo->cartas[i] = mazo->cartas[r];
        mazo->cartas[r] = temp;
    }
}

// Función para sacar una carta del mazo
Carta sacarCarta(Mazo *mazo) {
    Carta carta = mazo->cartas[mazo->cantidad - 1];
    mazo->cantidad--;
    return carta;
}

// Función para imprimir una carta
void imprimirCarta(Carta carta) {
    char *palos[] = {"Oros", "Copas", "Espadas", "Bastos"};
    printf("%d de %s\n", carta.numero, palos[carta.palo]);
}

int main() {
    // Crear y llenar el mazo de cartas
    Mazo mazo;
    mazo.cantidad = 50;
    for (int i = 0; i < 50; i++) {
        Carta carta;
        carta.numero = (i % 10) + 1;
        carta.palo = i / 10;
        mazo.cartas[i] = carta;
    }

    // Barajar el mazo y sacar una carta
    barajar(&mazo);
    Carta carta = sacarCarta(&mazo);

    // Imprimir la carta
    imprimirCarta(carta);

    return 0;
}