#include <iostream>


void saludos(std::string nombre, int tareas) {
    std::cout << "Buen día " << nombre << '\n';
    std::cout << "Buenas tardes " << nombre << '\n';
    std::cout << "Buenas noches " << nombre << '\n';
    std::cout << "Todavía tenés " << tareas << " pendientes" << '\n';
}

int main() {

    std::string nombre = "Mirko";
    int tareas = 5;

    saludos(nombre, tareas);

    return 0;
}