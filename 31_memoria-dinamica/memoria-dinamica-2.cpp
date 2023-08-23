#include <iostream>


int main() {

    char *pGrades = NULL;
    int size;

    std::cout << "Cuántas puntuaciones vas a ingresar?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Ingrese la puntuación #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    std::cout << '\n';

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}
