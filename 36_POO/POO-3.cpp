#include <iostream>


class Estudiante {
    public:
        std::string nombre;
        int edad;
        double gpa;

    Estudiante(std::string nombre, int edad, double gpa) {
        this->nombre = nombre;
        this->edad = edad;
        this->gpa = gpa;
    }
};

int main() {

    // Constructor (constructores) => método especial que se llama automaticamente cuando un objeto es
    // inicializado

    Estudiante estudiante1("Eliseo", 25, 3.2);
    Estudiante estudiante2("Adam", 20, 2.6);
    Estudiante estudiante3("Anabella", 23, 3.2);

    std::cout << estudiante1.nombre << '\n';
    std::cout << estudiante1.edad << '\n';
    std::cout << estudiante1.gpa << '\n';
    std::cout << '\n';

    std::cout << estudiante2.nombre << '\n';
    std::cout << estudiante2.edad << '\n';
    std::cout << estudiante2.gpa << '\n';
    std::cout << '\n';

    std::cout << estudiante3.nombre << '\n';
    std::cout << estudiante3.edad << '\n';
    std::cout << estudiante3.gpa << '\n';
    std::cout << '\n';

    return 0;
}
