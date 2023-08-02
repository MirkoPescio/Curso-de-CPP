#include <iostream>


int main() {

    // fill() = llena un rango de elementos con un valor específico
    //          fill(inicio, final, valor)

    std::string comidas[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    for (std::string comida : comidas) {
        std::cout << comida << '\n';
    }
    std::cout << '\n';

    std::string videojuegos[50];

    fill(videojuegos, videojuegos + 50, "Uncharted");

    for (std::string juego : videojuegos) {
        std::cout << juego << '\n';
    }
    std::cout << '\n';

    const int CANTIDAD = 50;

    std::string deportes[CANTIDAD];

    fill(deportes, deportes + 45, "Football");
    fill(deportes + 45, deportes + CANTIDAD, "Tennis");

    for (std::string deporte : deportes) {
        std::cout << deporte << '\n';
    }

    return 0;
}
