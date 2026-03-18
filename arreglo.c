#include <stdio.h>

int main()
{
    int opc = 0;
    int arreglo[10] = {0};   // ← FALTABA
    int inicializado = 0;    // ← FALTABA

    printf("***MENU ARREGLOS***\n");

    do {
        printf("\n1. Inicializar arreglo con valores fijos [5]\n");
        printf("2. Mostrar arreglo actual\n");
        printf("3. Agregar elemento al final\n");
        printf("4. Insertar elemento en posicion especifica\n");
        printf("5. Eliminar elemento por posicion\n");
        printf("6. Salir\n");

        scanf("%d", &opc);

        switch(opc){

            case 1: {
                int temp[10] = {2, 4, 6, 8, 10};

                for(int i = 0; i < 10; i++) {
                    arreglo[i] = temp[i];
                }

                inicializado = 1;
                printf("Arreglo inicializado correctamente\n");
                break;
            } // ← ESTA LLAVE FALTABA

            case 2: {
                if(inicializado != 1) {
                    printf("Primero inicializa el arreglo\n");
                } else {
                    printf("Arreglo:\n");
                    for(int i = 0; i < 10; i++) {
                        printf("%d ", arreglo[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                int nuevo;
                printf("Agrega el nuevo elemento: ");
                scanf("%d", &nuevo);

                int insertado = 0;

                for(int i = 0; i < 10; i++) {
                    if(arreglo[i] == 0) {
                        arreglo[i] = nuevo;
                        insertado = 1;
                        break;
                    }
                }

                if(insertado) {
                    printf("Elemento agregado correctamente\n");
                } else {
                    printf("El arreglo esta lleno\n");
                }
                break;
            }

            case 4: {
                int pos, valor;
                printf("Ingresa la posicion (0-9): ");
                scanf("%d", &pos);

                if(pos < 0 || pos >= 10) {
                    printf("Posicion invalida\n");
                } else {
                    printf("Ingresa el valor: ");
                    scanf("%d", &valor);
                    arreglo[pos] = valor;
                    printf("Elemento insertado correctamente\n");
                }
                break;
            }

            case 5: {
                int pos;
                printf("Ingresa la posicion a eliminar (0-9): ");
                scanf("%d", &pos);

                if(pos < 0 || pos >= 10) {
                    printf("Posicion invalida\n");
                } else {
                    arreglo[pos] = 0;
                    printf("Elemento eliminado\n");
                }
                break;
            }

            case 6:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while(opc != 6);

    return 0;
}