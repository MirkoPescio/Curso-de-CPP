#include <iostream>


int main() {

    std::string autos[][3] = {{"Mustang", "Fiesta", "Focus"},
                             {"Virtus", "Gol", "Polo"},
                             {"208", "3008", "5008"}};

    std::cout << autos[0][0] << " \n"; // Imprime 'Mustang'
    std::cout << autos[0][1] << " \n"; // Imprime 'Fiesta'
    std::cout << autos[1][1] << " \n"; // Imprime 'Gol'

    std::cout << '\n';

    // Para imprimir toda la matriz:
    int filas = sizeof(autos)/sizeof(autos[0]);
    int columnas = sizeof(autos[0])/sizeof(autos[0][0]);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << autos[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
