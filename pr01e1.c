#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};          //definimos arreglo de 5 enteros 

    printf("Direcciones de memoria de los elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        //se recorre el arreglo imprimiendo las direcciones de memoria de cada elemento 
        printf("arr[%d] = %d, Dirección: %p\n", i, arr[i], &arr[i]);
    }
    //los arreglos se almacenan en memoria de forma contigua 

    return 0;
}
