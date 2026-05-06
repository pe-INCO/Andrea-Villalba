#include <stdio.h>

int main() {

    FILE *archivo;
    int opc;
    char nombre[50];

    do {
        printf("\n*** MENU ***\n");
        printf("1. Leer nombres\n");
        printf("2. Guardar nombre\n");
        printf("3. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opc);

        switch(opc) {

            case 1:
                archivo = fopen("datos.txt", "r");

                if (archivo == NULL) {
                    printf("No hay datos guardados.\n");
                    break;
                }

                printf("\nNombres guardados:\n");
                while (fgets(nombre, sizeof(nombre), archivo) != NULL) {
                    printf("%s", nombre);
                }

                fclose(archivo);
                break;

            case 2:
                archivo = fopen("datos.txt", "a");

                if (archivo == NULL) {
                    printf("Error al abrir el archivo.\n");
                    break;
                }

                printf("Ingresa un nombre: ");
                scanf(" %[^\n]", nombre);  // permite espacios

                fprintf(archivo, "%s\n", nombre);

                fclose(archivo);
                printf("Nombre guardado correctamente.\n");
                break;

            case 3:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while(opc != 3);

    return 0;
}