#include <iostream>


int main() {

    // break = cortar la ejecución de un loop (o ciclo)
    // continue = saltear iteración

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            break;
        }
        std::cout << i << '\n';
        // Cuando el contador llega a 13 corta la ejecución del for permanentemente
    }

    std::cout << "\n";

    for (int u = 1; u <= 20; u++) {
        if (u == 13) {
            continue;
        }
        std::cout << u << '\n';
        // A diferencia del for anterior, en este caso, no corta definitivamente la ejecución de todo el loop
        // sino una iteración en específico
    }

    return 0;
}
