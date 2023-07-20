#include <iostream>


int main() {

    for (int index = 1; index <= 3; index++) {
        std::cout << "¡Que tengas una buena experiencia con C++!\n"; // Se va a ejecutar 3 veces
    }

    std::cout << "\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "¡¡FELIZ AÑO NUEVO!!\n";
    }

    std::cout << "\n";

    for (int u = 1; u <= 10; u++) {
        std::cout << u << '\n'; // Imprime números del 1 al 10 (u es el contador de los ciclos)
    }

    std::cout << "\n";

    for (int v = 1; v <= 10; v+=2) {
        std::cout << v << '\n'; // Imprime números del 1 al 10 (de 2 en 2)
        // Para este caso solamente va a llegar hasta el 9
    }
    
    std::cout << "\n";

    for (int p = 0; p <= 10; p+=2) {
        std::cout << p << '\n'; // Imprime números del 0 al 10 (de 2 en 2)
        // En este caso si llega a 10. Empieza desde el 0.
    }

    std::cout << "\n";

    // Contador en reversa:
    for (int r = 10; r >= 1; r--) {
        std::cout << r << '\n'; // Desde 10 hasta 1
    }

    std::cout << "\n";

    // Contador en reversa (de 2 en 2):
    for (int r2 = 10; r2 >= 0; r2-=2) {
        std::cout << r2 << '\n';
    }

    return 0;
}
