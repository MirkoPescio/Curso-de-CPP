#include <iostream>
#include "conio.h"
#include "windows.h"
#include "cstring"
#include "cstdlib"
using namespace std;


int main() {

    std::string nombre;

    std::cout << "Ingrese su nombre: ";
    std::getline(std::cin, nombre);

    if (nombre.length() > 12) {
        std::cout << "Tu nombre no puede superar 12 caracteres\n";
    }
    else if (nombre.empty()) {
        std::cout << "No ingresaste tu nombre\n";
    }
    else {
        std::cout << "Bienvenido/a " << nombre << '\n';
    }


    std::string texto1;

    std::cout << "Ingrese el 1° texto: ";
    std::getline(std::cin, texto1);

    // Borrar todo un string:
    texto1.clear();

    std::cout << "Texto ingresado (1° texto): " << texto1 << '\n';


    std::string correo1 = "invitado";

    // Agregar texto:
    correo1.append("@gmail.com");
    
    std::cout << "El correo de invitado es: " << correo1 << '\n';

    // Mostrando texto por consola:
    std::cout << correo1.at(0) << '\n'; // muestra el 1° caracter
    std::cout << correo1.at(1) << '\n'; // muestra el 2° caracter


    return 0;
}
