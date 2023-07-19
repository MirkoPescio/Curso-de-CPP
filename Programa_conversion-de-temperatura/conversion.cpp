#include <iostream>


int main() {

    double temperatura;
    char unidad;

    std::cout << "***** Conversión de Temperatura *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "¿A qué unidad vas a convertir? (C/F): ";
    std::cin >> unidad;

    if (unidad == 'F' || unidad == 'f') {
        std::cout << "Ingrese la temperatura en grados Celsius: ";
        std::cin >> temperatura;

        temperatura = (1.8 * temperatura) + 32.0;
        std::cout << "Aplicando conversión...\n";
        std::cout << "La temperatura es de: " << temperatura << "°F\n";
    }
    else if (unidad == 'C' || unidad == 'c') {
        std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
        std::cin >> temperatura;

        temperatura = (temperatura - 32) / 1.8;
        std::cout << "Aplicando conversión...\n";
        std::cout << "La temperatura es de: " << temperatura << "°C\n";
    }
    else {
        std::cout << "Solamente puede ingresar C o F\n";
    }

    std::cout << "*************************************";

    return 0;
}