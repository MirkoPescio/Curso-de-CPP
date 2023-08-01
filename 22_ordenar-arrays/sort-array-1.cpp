#include <iostream>


void ordenarAscendente(int array[], int cantidad);

void ordenarDescendente(int array[], int cantidad);

int main() {

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int cantidad = sizeof(array)/sizeof(array[0]);

    std::cout << "Lista sin ordenar:\n";
    for (int elemento : array) {
        std::cout << elemento << " ";
    }

    std::cout << "\nLista ordenada de menor a mayor:\n";

    ordenarAscendente(array, cantidad);

    for (int elemento : array) {
        std::cout << elemento << " ";
    }

    std::cout << "\nLista ordenada de mayor a menor:\n";

    ordenarDescendente(array, cantidad);

    for (int elemento : array) {
        std::cout << elemento << " ";
    }

    return 0;
}

void ordenarAscendente(int array[], int cantidad) {

    int temporal;
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temporal = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporal;
            }
        }
    }
}

void ordenarDescendente(int array[], int cantidad) {

    int temporal;
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                temporal = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporal;
            }
        }
    }
}
