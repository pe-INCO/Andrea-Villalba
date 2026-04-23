/******************************************************************************
Andrea Villalba Mercado
Programación estructurada
22/04/2026
*******************************************************************************/
#include <stdio.h>

int main() {

    int filas = 3;
    int columnas = 4;

    float notas[3][4];
    int i, j;
    int opcion;
    int hayDatos = 0;

    do {
        printf("\nMENU\n");
        printf("1. Ingresar notas\n");
        printf("2. Ver notas\n");
        printf("3. Promedio por alumno\n");
        printf("4. Promedio por materia\n");
        printf("5. Nota mayor\n");
        printf("6. Salir\n");
        printf("Que opcion necesitas: ");
        scanf("%d", &opcion);

        if(opcion == 1) {
            for(i = 0; i < filas; i++) {
                printf("\nAlumno %d\n", i+1);
                for(j = 0; j < columnas; j++) {
                    printf("Nota %d: ", j+1);
                    scanf("%f", &notas[i][j]);
                }
            }
            hayDatos = 1;
        }

        else if(opcion == 2) {
            if(hayDatos == 0) {
                printf("Primero mete datos\n");
            } else {
                for(i = 0; i < filas; i++) {
                    for(j = 0; j < columnas; j++) {
                        printf("%.1f ", notas[i][j]);
                    }
                    printf("\n");
                }
            }
        }

        else if(opcion == 3) {
            if(hayDatos == 0) {
                printf("No hay datos\n");
            } else {
                for(i = 0; i < filas; i++) {
                    float suma = 0;
                    for(j = 0; j < columnas; j++) {
                        suma = suma + notas[i][j];
                    }
                    printf("Alumno %d promedio: %.2f\n", i+1, suma/columnas);
                }
            }
        }

        else if(opcion == 4) {
            if(hayDatos == 0) {
                printf("No hay datos\n");
            } else {
                for(j = 0; j < columnas; j++) {
                    float suma = 0;
                    for(i = 0; i < filas; i++) {
                        suma = suma + notas[i][j];
                    }
                    printf("Materia %d promedio: %.2f\n", j+1, suma/filas);
                }
            }
        }

        else if(opcion == 5) {
            if(hayDatos == 0) {
                printf("No hay datos\n");
            } else {
                float mayor = notas[0][0];
                int fi = 0, co = 0;

                for(i = 0; i < filas; i++) {
                    for(j = 0; j < columnas; j++) {
                        if(notas[i][j] > mayor) {
                            mayor = notas[i][j];
                            fi = i;
                            co = j;
                        }
                    }
                }

                printf("Mayor: %.2f\n", mayor);
                printf("Alumno %d Materia %d\n", fi+1, co+1);
            }
        }

    } while(opcion != 6);

    return 0;
}