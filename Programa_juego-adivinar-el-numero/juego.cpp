#include <iostream>


int main() {

    int numero;
    int miNumero;
    int intentos;

    srand(time(NULL));
    numero = (rand() % 100) + 1;

    intentos = 7;

    std::cout << "****** JUEGO ADIVINAR EL NUMERO ******" << '\n';

    std::cout << "Tenés: " << intentos << " intentos" << '\n';

    do {
        std::cout << "Ingrese un número entre (1-100): ";
        std::cin >> miNumero;

        if (miNumero > numero) {
            intentos--;
            std::cout << "El número a adivinar es más chico" << '\n';
            std::cout << "Te quedan: " << intentos << " intentos" << '\n';
        }
        else if (miNumero < numero) {
            intentos--;
            std::cout << "El número a adivinar es más grande" << '\n';
            std::cout << "Te quedan: " << intentos << " intentos" << '\n';
        }

        if (intentos == 0) {
            std::cout << "No te quedan más intentos" << '\n';
            break;
        }

    } while (miNumero != numero);

    if (miNumero != numero) {
        std::cout << "El número a adivinar era: " << numero << '\n';
    } else {
        std::cout << "¡GANASTE!" << '\n';
        std::cout << "El número es: " << numero << '\n';
    }

    return 0;
}