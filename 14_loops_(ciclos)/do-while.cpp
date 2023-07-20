#include <iostream>


int main() {

    // do while loop = primero ejecuta un bloque de código,
    //                 después lo repite si la condición es verdadera

    int numero1;

    // Primero veamos un ejemplo sin usar el do while:

    std::cout << "Ingrese un número positivo: ";
    std::cin >> numero1;

    while (numero1 <= 0) {
        std::cout << "Ingrese un número positivo: ";
        std::cin >> numero1;
    }

    std::cout << "El número ingresado es: " << numero1 << '\n';

    int numero2;

    // Ahora el mismo ejemplo usando el do while:

    do {
        std::cout << "Reingrese otro número positivo: ";
        std::cin >> numero2;
    } while (numero2 <= 0);

    std::cout << "El 2° número ingresado es: " << numero2 << '\n';

    // Además de usar menos líneas, el código es más optimizado (es una mejor práctica)

    return 0;
}
