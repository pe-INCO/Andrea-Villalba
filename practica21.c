/******************************************************************************

Andrea Villalba Mercado
04/05/2026

*******************************************************************************/
#include <stdio.h>

int main() {
    FILE *archivo;
    FILE *archivo1;


    // Abrir archivo en modo escritura ("w" crea o sobrescribe)
    archivo = fopen("depositos.txt", "w");
    archivo1 = fopen("retiros.txt", "w");


    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    
    if (archivo1 == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    
    // Escribir en el archivo
    fprintf(archivo, "Aqui se mostraran los depositos\n");
    fprintf(archivo, "El Deposito es de: %d\n", 500);
    fprintf(archivo, "Deposito Hecho.\n");
    
    fprintf(archivo1, "Aqui se mostraran los Retiros\n");
    fprintf(archivo1, "El Retiro es de: %d\n", 500);
    fprintf(archivo1, "Retiro Hecho.\n");
    
    // Cerrar el archivo
    fclose(archivo);
    fclose(archivo1);
    
    printf("Archivo escrito exitosamente\n");
    
    return 0;
}