/******************************************************************************
Andrea Villalba Mercado
Programación estructurada
16/04/2026
*******************************************************************************/
#include <stdio.h>

int pila[5];
int tope = -1;

int main() {
    int opcion, valor, i;

    do {
        printf("\nMENU\n");
        printf("1. Agregar\n");
        printf("2. Eliminar\n");
        printf("3. Mostrar\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            if (tope == 4) {
                printf("Pila llena\n");
            } else {
                printf("Valor: ");
                scanf("%d", &valor);
                tope++;
                pila[tope] = valor;
            }
        }

        else if (opcion == 2) {
            if (tope == -1) {
                printf("Pila vacia\n");
            } else {
                printf("Se elimino: %d\n", pila[tope]);
                tope--;
            }
        }

        else if (opcion == 3) {
            if (tope == -1) {
                printf("Pila vacia\n");
            } else {
                printf("Pila: ");
                for (i = 0; i <= tope; i++) {
                    printf("%d ", pila[i]);
                }
                printf("\n");
            }
        }

    } while (opcion != 4);

    return 0;
}