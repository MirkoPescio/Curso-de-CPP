#include <iostream>


int main() {

    std::cout << "Valoración de puntajes en Resident Evil 4 Remake";
    std::cout << "El rango estos es la siguiente (C - B - A - S - S+ - S++)";

    char puntaje;

    std::cout << "¿Qué puntaje obtuviste en Resident Evil 4 Remake?: ";
    std::cin >> puntaje;

    switch (puntaje)
    {
    case 'S':
        std::cout << "Perfecto!!";
        break;
    case 'A':
        std::cout << "Muy bien, ahora por el rango S";
        break;
    case 'B':
        std::cout << "Bien, pero puede estar mejor";
        break;
    case 'C':
        std::cout << "La práctica hace al maestro. A mejorar!";
        break;
    default:
        std::cout << "Todavía no completaste el juego";
        break;
    }

    return 0;
}
