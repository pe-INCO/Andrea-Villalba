/******************************************************************************

Andrea Villalba Mercado 
20/04/2026
Programación estructurada

*******************************************************************************/
#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main() {
    float notas[FILAS][COLUMNAS];
    int i, j, opcion;
    int hayDatos = 0;

    while (opcion != 6) {

        printf("\n1 Ingresar notas\n");
        printf("2 Mostrar notas\n");
        printf("3 Promedio estudiante\n");
        printf("4 Promedio materia\n");
        printf("5 Nota mas alta\n");
        printf("6 Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {

            for (i = 0; i < FILAS; i++) {
                for (j = 0; j < COLUMNAS; j++) {
                    printf("Nota estudiante %d materia %d: ", i + 1, j + 1);
                    scanf("%f", &notas[i][j]);
                }
            }

            hayDatos = 1;
        }

        if (opcion == 2) {

            if (hayDatos == 0) {
                printf("Primero ingrese datos\n");
            } else {
                for (i = 0; i < FILAS; i++) {
                    for (j = 0; j < COLUMNAS; j++) {
                        printf("%.2f ", notas[i][j]);
                    }
                    printf("\n");
                }
            }
        }

 
    return 0;
}