#include <iostream>


struct Autos {
    std::string modelo;
    int year; // No puedo escribir año porque tiene un caracter que no lo permite 'ñ'
    std::string color;
};

void mostrarAutos(Autos autos);

void pintarAutos(Autos &autos, std::string color);

int main() {

    Autos auto1;
    Autos auto2;

    auto1.modelo = "Volkswagen Gol";
    auto1.year = 2018;
    auto1.color = "Rojo";

    auto2.modelo = "Ford Fiesta";
    auto2.year = 2016;
    auto2.color = "Azul";

    pintarAutos(auto1, "Plateado");

    mostrarAutos(auto1);
    std::cout << '\n';
    mostrarAutos(auto2);

    return 0;
}

void mostrarAutos(Autos autos) {
    std::cout << autos.modelo << '\n';
    std::cout << autos.year << '\n';
    std::cout << autos.color << '\n';
}

void pintarAutos(Autos &autos, std::string color) {
    autos.color = color;
}
