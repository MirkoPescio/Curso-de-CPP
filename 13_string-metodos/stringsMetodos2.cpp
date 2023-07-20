#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <cstdlib>

using namespace std;


int main() {

    std::string nombre;

    std::cout << "Ingrese un nombre: ";
    std::getline(std::cin, nombre);

    // Agregar texto en una ubicación en específico:
    /* nombre.insert(0, "@");
    std::cout << nombre << '\n'; */

    // Encontrar la ubicación (index) de la cadena especifícada
    // Ejemplo: buscar la ubicación de 'na' en la cadena 'Anabella'
    // Respuesta: 2
    std::cout << nombre.find("na") << '\n';

    // erase: se usa para recortar una cadena
    // Ejemplo: la cadena es 'Bro Code'
    // Aplico cadena.erase(0, 3)
    // El resultado va a ser: ' Code'
    // cadena.erase(0, 4) : 'Code' (ya que el espacio también cuenta como un caracter)

    std::string texto1;

    std::cout << "Ingrese el 1° texto: ";
    std::getline(std::cin, texto1);

    std::cout << texto1.erase(0, 3) << '\n';

    return 0;
}
