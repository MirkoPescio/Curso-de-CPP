#include <iostream>


int main() {

    // Los nullptr son muy útiles para determinar si una dirección fué asignada de forma satisfactoria a un puntero

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "La dirección no fué asignada\n";
    } else {
        std::cout << "La dirección fué asignada\n";
        std::cout << *pointer;
    }

    return 0;
}
