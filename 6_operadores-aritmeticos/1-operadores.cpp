#include <iostream>


int main() {

    int estudiantes = 20;
    // estudiantes = estudiantes + 4;
    estudiantes += 4; // Resultado actualizado:  estudiantes = 24
    // estudiantes++ (incremental para sumar 1)
    std::cout << estudiantes << '\n';

    // estudiantes = estudiantes - 2;
    estudiantes -= 2; // Resultado actualizado:  estudiantes = 22
    // estudiantes-- (resta 1)
    std::cout << estudiantes << '\n';

    // estudiantes = estudiantes * 2;
    estudiantes *= 2; // Resultado actualizado:  estudiantes = 44
    std::cout << estudiantes << '\n';

    // estudiantes = estudiantes / 4;
    estudiantes /= 4; // Resultado actualizado:  estudiantes = 11
    std::cout << estudiantes << '\n';

    return 0;
}