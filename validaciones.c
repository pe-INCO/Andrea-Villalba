#include <stdio.h>
#include <string.h>

int main(){
    int opcion, edad, valido=0, tam;
    float cal;
    char nombre[40];
   
    do{
    printf("---VALIDACIONES MENU---\n\n");
    printf("1. Ingresa tu edad (18 y 80)\n");
    printf("2. Ingresar calificacion (0 y 100)\n");
    printf("3. Ingresa tu nombre\n");
    printf("4. salir\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            printf("Ingresa tu edad: ");
            scanf("%d", &edad);
           
            if(edad>=18&&edad<=80){
                printf("Edad valida\n");
            }else{
                printf("Edad invalida\n");
            }
            break;
        case 2:
            printf("Ingresa tu calificacion: ");
            scanf("%f", &cal);
           
            if(cal>=0&&cal<=100){
                printf("calificacion valida\n");
            }else{
                printf("calificacion invalida\n");
            }
            break;
case 3:

    getchar();  // limpiar el salto pendiente de scanf

    do {
        valido = 1;
        printf("Ingresa el nombre (3-40 caracteres): ");

        if (fgets(nombre, sizeof(nombre), stdin)) {
            if (strchr(nombre, '\n') == NULL) {
                while (getchar() != '\n');
            }
            nombre[strcspn(nombre, "\n")] = '\0';
        }

        tam = strlen(nombre);

        if (tam < 3 || tam > 40) {
            printf("Error: El nombre debe tener entre 3 y 40 caracteres.\n");
            valido = 0;
        } else {

            for (int i = 0; i < tam; i++) {
                if (!((nombre[i] >= 'A' && nombre[i] <= 'Z') ||
                      (nombre[i] >= 'a' && nombre[i] <= 'z') ||
                      nombre[i] == ' ')) {

                    printf("Error: Solo se permiten letras y espacios.\n");
                    valido = 0;
                    break;
                }
            }

            if (valido == 1) {
                printf("Nombre valido\n");
            }
        }

    } while (valido == 0);

    break;
        case 4:
            printf("Saliendo...");
    }
    }while(opcion!=4);
   
    return 0;
}