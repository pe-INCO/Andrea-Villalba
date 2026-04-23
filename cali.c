#include <stdio.h>

int main() {

    float notas[100];
    int total = 0;     // Total de notas ingresadas
    int aprob = 0;     // Cantidad de aprobados
    int repro = 0;     // Cantidad de reprobados

    float suma = 0;    // Suma total de todas las notas
    float sumaA = 0;   // Suma de notas aprobadas
    float sumaR = 0;   // Suma de notas reprobadas

    int op;            // Opción del menú
    char res;          // Respuesta para continuar (s/n)
    float notaind;     // Nota individual ingresada

    do {
        // Mostrar menú
        printf("\nMENU\n");
        printf("1. Ingresar notas\n");
        printf("2. Ver estadisticas\n");
        printf("3. Reiniciar\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &op);

        // ===== OPCIÓN 1: INGRESAR NOTAS =====
        if (op == 1) {
            do {

                // Pedir nota
                printf("Ingrese la calificacion (0-100): ");
                scanf("%f", &notaind);

                // Validar que esté en el rango correcto
                if (notaind >= 0 && notaind <= 100) {

                    // Guardar nota en el arreglo
                    notas[total] = notaind;
                    total++;  // Aumentar contador total

                    // Sumar al acumulador general
                    suma = suma + notaind;

                    // Verificar si es aprobado o reprobado
                    if (notaind >= 60) {
                        aprob++;
                        sumaA = sumaA + notaind;
                    } else {
                        repro++;
                        sumaR = sumaR + notaind;
                    }

                } else {
                    printf("Nota invalida\n");
                }

                // Preguntar si desea ingresar otra nota
                printf("Otra nota? (s/n): ");
                scanf(" %c", &res);

            } while (res == 's');  // Repetir si responde 's'
        }

        // ===== OPCIÓN 2: VER ESTADÍSTICAS =====
        if (op == 2) {

            // Verificar que haya datos
            if (total == 0) {
                printf("No hay datos\n");
            } else {
                printf("\nRESULTADOS\n");
                printf("Total: %d\n", total);
                printf("Promedio general: %.2f\n", suma / total);
                printf("Aprobados: %d\n", aprob);
                printf("Reprobados: %d\n", repro);

                // Evitar división entre 0
                if (aprob > 0)
                    printf("Promedio aprobados: %.2f\n", sumaA / aprob);

                if (repro > 0)
                    printf("Promedio reprobados: %.2f\n", sumaR / repro);
            }
        }

        // ===== OPCIÓN 3: REINICIAR DATOS =====
        if (op == 3) {
            total = 0;
            aprob = 0;
            repro = 0;
            suma = 0;
            sumaA = 0;
            sumaR = 0;
            printf("Datos borrados\n");
        }

    } while (op != 4);  // El programa se repite hasta elegir 4

    return 0;  // Fin del programa
}