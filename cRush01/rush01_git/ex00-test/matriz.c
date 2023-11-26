#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarar variables
    int filas = 4;
    int columnas = 4;

    // Crear matriz de char con malloc
    char** matriz = (char**)malloc(filas * sizeof(char*));
    int i = 0;
    while (i < filas) {
        matriz[i] = (char*)malloc(columnas * sizeof(char));
        i++;
    }

    // Inicializar matriz (puedes omitir este paso si no es necesario)
    i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            matriz[i][j] = 'A' + i * columnas + j;
            j++;
        }
        i++;
    }

    // Recorrer la matriz
    i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            printf("%c ", matriz[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    // Liberar memoria
    i = 0;
    while (i < filas) {
        free(matriz[i]);
        i++;
    }
    free(matriz);

    return 0;
}
