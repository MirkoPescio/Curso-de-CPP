#include <iostream>


int main() {

    // Memory address: una ubicación en la memoria donde se almacenan los datos
    // Una dirección en memoria puede ser accedida con el operador '&'

    std::string nombre = "Mirko Pescio";
    int edad = 24;
    bool estudiante = true;

    std::cout << &nombre << '\n';
    std::cout << &edad << '\n';
    std::cout << &estudiante << '\n';

    return 0;
}
