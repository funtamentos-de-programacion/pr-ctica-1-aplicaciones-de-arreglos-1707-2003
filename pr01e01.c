#include <stdio.h>

int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}}; //definicion de matriz de 2x3

    printf("Dirección de mat: %p\n", mat); //apunta a la primera fila de la matriz 
    printf("Dirección de mat[0]: %p\n", mat[0]); //apuntador al primer elemento 
    printf("Dirección de &mat[0][0]: %p\n", &mat[0][0]);//direccion exacta del primer elemento 

    return 0;
}
