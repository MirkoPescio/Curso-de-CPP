#include <iostream>


int main() {

    // Números enteros (int)
    int edad = 21;
    int year = 2023;

    // Números decimales (float o double)
    float dias = 7.5;
    double precio = 245.50;
    double temperatura = 25.1;

    // Caracter simple (char)
    // Muestra por consola el último caracter del string
    char grado = 'A';
    char divisionDelCurso = 'C';
    char conversionMoneda = '$';

    // Booleano (True o False)
    // Si el valor es falso imprime 0, si es verdadero imprime 1
    bool estudiante = false;
    bool power = true;
    bool enVenta = true;

    // Cadenas de texto (string)
    std::string nombre = "Mirko Pescio";
    std::string holaMundo = "Hola Mundo!!";
    std::string nuevaPelicula = "The Flash (2023)";


    std::cout << dias << '\n';
    std::cout << precio << '\n';
    std::cout << temperatura << '\n';
    std::cout << grado << '\n';
    std::cout << divisionDelCurso << '\n';
    std::cout << conversionMoneda << '\n';
    std::cout << estudiante << '\n';
    std::cout << power << '\n';
    std::cout << enVenta << '\n';
    std::cout << nombre << '\n';
    std::cout << holaMundo << '\n';
    std::cout << nuevaPelicula << '\n';

    // Podemos concatenar e imprimir por consola:
    std::cout << "Hola " << nombre << '\n';
    std::cout << "Tenés " << edad << " años" << '\n';

    return 0;
}

