#include <iostream>


int main() {

    // pointers = es una variable que se almacena en una dirección en memoria de otra variable

    // & dirección-de operador
    // * referencia operador

    std::string nombre = "Mirko";
    int edad = 24;
    std::string pizzasGratis[3] = {"Muzzarella", "Palmitos", "Jamón y Queso"};

    std::string *pNombre = &nombre;
    int *pEdad = &edad;
    std::string *pPizzasGratis = pizzasGratis;

    // Obtengo las direcciones en memoria
    std::cout << pNombre << '\n';
    std::cout << pEdad << '\n';
    std::cout << pPizzasGratis << '\n';

    std::cout << '\n';

    // Obtengo el valor de las variables
    std::cout << *pNombre << '\n';
    std::cout << *pEdad << '\n';
    std::cout << *pPizzasGratis << '\n';

    return 0;
}
