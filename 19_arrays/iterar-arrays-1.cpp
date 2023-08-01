#include <iostream>
#include <string>


int main() {

    std::string estudiantes[] = {"Bob Esponja", "Patricio", "Calamardo", "Arenita"};

    for (int i = 0; i < sizeof(estudiantes)/sizeof(std::string); i++) {
        std::cout << estudiantes[i] << '\n';
    }
    std::cout << '\n';
    // Recordar que sizeof sirve como el método .length() de otros lenguajes
    // en este caso para determinar la cantidad de elementos del array

    char puntajes[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(puntajes)/sizeof(char); i++) {
        std::cout << puntajes[i] << '\n';
    }
    std::cout << '\n';

    // Otra forma de iterar el array 'estudiantes'
    for (std::string estudiante : estudiantes) {
        std::cout << estudiante << '\n';
    }
    std::cout << '\n';

    int numeros[] = {45, 68, 39, 57};

    for (int numero : numeros) {
        std::cout << numero << '\n';
    }

    return 0;
}
