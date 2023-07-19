#include <iostream>

int main() {

    int age;

    std::cout << "Ingrese su edad: ";
    std::cin >> age;

    if (age >= 120) {
        std::cout << "Ingrese un dato válido";
    }
    else if (age <= 0) {
        std::cout << "Ingrese un dato válido";
    }
    else if (age >= 18) {
        std::cout << "Bienvenido/a";
    }
    else {
        std::cout << "No tenés la edad suficiente para ingresar";
    }

    return 0;
}
