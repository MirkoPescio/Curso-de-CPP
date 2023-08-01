#include <iostream>

// Lo mismo que el ejemplo anterior, pero con strings

int buscarArray(std::string array[], int cantidad, std::string elemento);

int main() {

    std::string comida[] = {"pizza", "helado", "hamburguesa"};
    int cantidad = sizeof(comida)/sizeof(comida[0]);
    int index;
    std::string miComida;

    std::cout << "Ingrese el elemento que va a buscar: " << '\n';
    std::cin >> miComida;

    index = buscarArray(comida, cantidad, miComida);

    if (index != -1) {
        std::cout << miComida << " está en el index (ubicación): " << index;
    } else {
        std::cout << miComida << " no está en el array";
    }

    return 0;
}

int buscarArray(std::string array[], int cantidad, std::string elemento) {
    
    for (int i = 0; i < cantidad; i++) {
        if (array[i] == elemento) {
            return i;
        }
    }
    return -1;
}
