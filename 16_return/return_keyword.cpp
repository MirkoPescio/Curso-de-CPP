#include <iostream>


std::string concatStrings(std::string string1, std::string string2);

int main() {

    std::string nombre = "Mirko";
    std::string apellido = "Pescio";
    std::string nombreCompleto = concatStrings(nombre, apellido);

    std::cout << "Hola " << nombreCompleto << '\n';

    return 0;
}

std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}
