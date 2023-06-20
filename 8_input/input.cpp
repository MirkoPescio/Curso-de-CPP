#include <iostream>


int main() {

    std::string nombre;
    int edad;

    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Hola " << nombre << '\n';
    std::cout << "Ingresaste que tu edad es de " << edad << " años";

    return 0;
}