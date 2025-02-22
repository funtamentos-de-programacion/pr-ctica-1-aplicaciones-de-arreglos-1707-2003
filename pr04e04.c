#include <stdio.h>
int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}}; //definición de la matriz 2x3
    int *ptr = &mat[0][0];  // Puntero al primer elemento de la matriz

    printf("Direcciones de memoria de la matriz:\n");
    //for recorre la memoria 
    for (int i = 0; i < 6; i++) {
        printf("Valor: %d, Dirección: %p\n", *(ptr + i), (ptr + i));
        //el apuntador se usa para acceder a los elementos 
    }

    return 0;
}
