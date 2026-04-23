/******************************************************************************
Andrea Villalba Mercado
Programación estructurada
16/04/2026
*******************************************************************************/
#include <stdio.h>

int cola[5];
int frente = 0;
int final = -1;

int main() {
    int opcion, valor, i;

    do {
        printf("\nMENU\n");
        printf("1. Encolar\n");
        printf("2. Desencolar\n");
        printf("3. Mostrar\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            if (final == 4) {
                printf("Cola llena\n");
            } else {
                printf("Dame el valor: ");
                scanf("%d", &valor);
                final++;
                cola[final] = valor;
            }
        }

        else if (opcion == 2) {
            if (frente > final) {
                printf("Cola vacia\n");
            } else {
                printf("Se elimino: %d\n", cola[frente]);
                frente++;
            }
        }

        else if (opcion == 3) {
            if (frente > final) {
                printf("Cola vacia\n");
            } else {
                printf("Cola: ");
                for (i = frente; i <= final; i++) {
                    printf("%d ", cola[i]);
                }
                printf("\n");
            }
        }

    } while (opcion != 4);

    return 0;
}