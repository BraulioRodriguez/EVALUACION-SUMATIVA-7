#include <stdio.h>

/* Elaborar una aplicación de línea de comandos en C que dado 10 números, 
pueda mostrar cuál es el número mayor y el número de veces que aparece en la serie. */

  int main() {
    int a[10], b[10];
    int i, j, c = 0;
    int numero_mayor;

    printf("Ingrese 10 numeros: \n");
    for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    }

    numero_mayor = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > numero_mayor) {
            numero_mayor = a[i];
            
        }
        if (a[i] == a[j]) {
            c++;
        }
        
    }
    printf("\nEl numero mayor es: %d ", numero_mayor);

    if (c == 1) {
        printf("y se repite %d vez.\n\n", c);
    }
    else
        printf("y se repite %d veces\n\n", c);

    return 0;
}