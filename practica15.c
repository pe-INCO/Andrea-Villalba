/******************************************************************************

Andrea Villalba Mercado 
25/03/2026
Programación estructurada
*******************************************************************************/
#include <stdio.h>
    int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
    int buscar;
    int encontrado = 0;    
    int main()
    {
        printf("Dime el numero a buscar: ");
        scanf("%d", &buscar);
        
    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == buscar) {
            printf("Número encontrado en la posicion: %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (encontrado==0) {
        printf("Número no encontrado en el arreglo.\n");
    }

    return 0;
}


