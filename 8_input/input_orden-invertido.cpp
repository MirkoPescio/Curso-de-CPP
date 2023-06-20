#include <iostream>

// Es el mismo ejemplo anterior pero con el orden invertido en el código
// Por consola la información tiene el orden anterior

int main() {

    std::string nombre;
    int edad;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin >> std::ws, nombre);

    std::cout << "Hola " << nombre << '\n';
    std::cout << "Ingresaste que tu edad es de " << edad << " años";

    return 0;
}
