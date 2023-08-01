#include <iostream>


int buscarArray(int array[], int cantidad, int elemento);

int main() {

    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cantidad = sizeof(numeros)/sizeof(numeros[0]);
    int index;
    int miNumero;

    std::cout << "Ingrese el elemento que va a buscar: " << '\n';
    std::cin >> miNumero;

    index = buscarArray(numeros, cantidad, miNumero);

    if (index != -1) {
        std::cout << miNumero << " está en el index (ubicación):  " << index;
    } else {
        std::cout << miNumero << " no está en el array";
    }

    return 0;
}

int buscarArray(int array[], int cantidad, int elemento) {
    
    for (int i = 0; i < cantidad; i++) {
        if (array[i] == elemento) {
            return i;
        }
    }
    return -1;
}
