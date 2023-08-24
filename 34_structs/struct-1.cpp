#include <iostream>


struct estudiante {
    std::string nombre;
    double gpa;
    bool matriculado;
};

int main() {

    // struct = Las estructuras (también llamadas estructuras) son una forma de agrupar varias variables relacionadas 
    // en un solo lugar. Cada variable de la estructura es conocido como miembro de la estructura.

    //A diferencia de una matriz, una estructura puede contener muchos Diferentes tipos de datos 
    // (int, string, bool, etc.).

    estudiante estudiante1;
    estudiante1.nombre = "Bob Esponja";
    estudiante1.gpa = 3.2;
    estudiante1.matriculado = true;

    estudiante estudiante2;
    estudiante2.nombre = "Patricio";
    estudiante2.gpa = 2.1;
    estudiante2.matriculado = true;

    estudiante estudiante3;
    estudiante3.nombre = "Calamardo";
    estudiante3.gpa = 2.4;
    estudiante3.matriculado = false;

    std::cout << estudiante1.nombre << '\n';
    std::cout << estudiante1.gpa << '\n';
    std::cout << estudiante1.matriculado << '\n';
    std::cout << '\n';

    std::cout << estudiante2.nombre << '\n';
    std::cout << estudiante2.gpa << '\n';
    std::cout << estudiante2.matriculado << '\n';
    std::cout << '\n';

    std::cout << estudiante3.nombre << '\n';
    std::cout << estudiante3.gpa << '\n';
    std::cout << estudiante3.matriculado << '\n';
    std::cout << '\n';

    return 0;
}
