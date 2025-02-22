#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3}; // definimos arreglo de 3 enteros

    printf("Dirección del arreglo arr: %p\n", arr); 
    //arr actua como un apuntador al primer elemento del arreglo
    printf("Dirección del primer elemento arr[0]: %p\n", &arr[0]);
    //&arr[0] es un sobrenombre del apuntador al primer elemento

    return 0;
}
