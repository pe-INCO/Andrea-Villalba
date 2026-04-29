/******************************************************************************

Andrea Villalba Mercado
29/04/2026
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    char copia[200];
    int longitud, i;

    // Solicitar frase al usuario
    printf("Ingresa una frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Eliminar salto de línea si existe
    frase[strcspn(frase, "\n")] = '\0';

    // Longitud de la cadena
    longitud = strlen(frase);

    printf("\nLongitud de la cadena: %d\n", longitud);

    // Primeros 3 caracteres
    printf("Primeros 3 caracteres: ");
    for(i = 0; i < 3 && i < longitud; i++) {
        printf("%c", frase[i]);
    }

    // Últimos 3 caracteres
    printf("\nUltimos 3 caracteres: ");
    if(longitud >= 3) {
        for(i = longitud - 3; i < longitud; i++) {
            printf("%c", frase[i]);
        }
    } else {
        printf("%s", frase);
    }

    // Cadena en mayúsculas
    strcpy(copia, frase);
    for(i = 0; copia[i] != '\0'; i++) {
        copia[i] = toupper(copia[i]);
    }
    printf("\nCadena en mayusculas: %s", copia);

    // Cadena en minúsculas
    strcpy(copia, frase);
    for(i = 0; copia[i] != '\0'; i++) {
        copia[i] = tolower(copia[i]);
    }
    printf("\nCadena en minusculas: %s", copia);

    // Reemplazar vocales 'a' por '@'
    strcpy(copia, frase);
    for(i = 0; copia[i] != '\0'; i++) {
        if(copia[i] == 'a' || copia[i] == 'A') {
            copia[i] = '@';
        }
    }
    printf("\nCadena reemplazando 'a' por '@': %s\n", copia);

    return 0;
}