#include <stdio.h>
#include <stdlib.h>
#define LONG 300

int main() {
    FILE *f;
    char linea[LONG];

    // Abrir el archivo
    f = fopen("prueba.txt", "r");
    if (f == NULL) {
        printf("\nError al abrir archivo fuente\n");
        return 1;
    }

    // Leer una línea del archivo y comprobar si se llegó al final del archivo
    while (fgets(linea, LONG, f) != NULL) {
        // Imprimir la línea en la pantalla
        printf("%s", linea);
    }

    fclose(f);
    return 0;
}
