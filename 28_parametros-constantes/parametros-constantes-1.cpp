#include <iostream>


void imprimirInformacion(const std::string nombre, const int edad);

int main() {

    // Parámetro constante = el parámetro que es efectivamente código de sólo lectura es más seguro y es más útil
    //                       para pasar a una función por referencia

    std::string nombre = "Mirko Pescio";
    int edad = 24;

    imprimirInformacion(nombre, edad);

    return 0;
}

void imprimirInformacion(const std::string nombre, const int edad) {
    /* nombre = " ";
    edad = 0; */
    // De esta manera los valores no pueden ser modificados (hace más seguro el código)
    std::cout << "Nombre: " << nombre << '\n';
    std::cout << "Edad: " << edad << " años" << '\n';
}
