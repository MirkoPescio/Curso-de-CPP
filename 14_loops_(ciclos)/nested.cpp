#include <iostream>


int main() {

    // Bucles for anidados

    int filas;
    int columnas;
    char simbolo;

    std::cout << "Cantidad de filas: ";
    std::cin >> filas;

    std::cout << '\n';

    std::cout << "Cantidad de columnas: ";
    std::cin >> columnas;

    std::cout << '\n';

    std::cout << "Ingrese el símbolo que va a usar: ";
    std::cin >> simbolo;

    for (int i = 1; i <= filas; i++) {
        for (int u = 1; u <= columnas; u++) {
            std::cout << simbolo << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
