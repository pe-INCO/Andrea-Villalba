/******************************************************************************* 
Andrea Villalba Mercado 
16/02/2026 
Programacion estructurada 
*******************************************************************************/

#include <stdio.h>   
#include <stdlib.h>
#include <time.h>     

int main() {

    srand(time(NULL));  // Inicializa los numeros aleatorios

    int numero, numus, puntaje = 0, opc; 

    do {   // Menu principal

        printf("\n*** ADIVINA EL NUMERO ***\n\n");
        printf("1: Jugar\n");
        printf("2: Ver puntuacion\n");
        printf("3: Salir\n");

        printf("Que opcion necesitas?: ");
        scanf("%d", &opc);

        if (opc == 1) {

            numero = rand() % 50 + 1;   // Numero aleatorio del 1 al 50
            int intentos = 0;           // Contador de intentos
            int adivino = 0;            // Bandera para saber si gano

            do {   // Juego (maximo 5 intentos)

                printf("Intento %d de 5\n", intentos + 1);
                printf("Ingresa un numero: ");
                scanf("%d", &numus);

                intentos++;  // Aumenta intentos

                if (numus > numero) {
                    printf("El numero es menor.\n");
                } 
                else if (numus < numero) {
                    printf("El numero es mayor.\n");
                } 
                else {
                    printf("¡Correcto!\n");
                    puntaje = puntaje + 10;  // Suma 10 puntos si gana
                    adivino = 1;
                }

            } while (numus != numero && intentos < 5);

            if (adivino == 0) {   // Si no adivino
                printf("Perdiste, El numero era: %d\n", numero);
                puntaje = puntaje - 5;   // Resta 5 puntos
            }

        } 
        else if (opc == 2) {
            printf("Tu puntuacion es: %d\n", puntaje);
        }

    } while (opc != 3);   // Se repite hasta que elija salir

    printf("Gracias por jugar.\n");

    return 0;
}