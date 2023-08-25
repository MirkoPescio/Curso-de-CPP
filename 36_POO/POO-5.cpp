#include <iostream>


class Auto {
    public:
        std::string marca;
        std::string modelo;
        int year;
        std::string color;

    Auto(std::string marca, std::string modelo, int year, std::string color) {
        this->marca = marca;
        this->modelo = modelo;
        this->year = year;
        this->color = color;
    }
};

int main() {

    Auto auto1("Audi", "R8", 2015, "Rojo");
    Auto auto2("Peugeot", "208", 2014, "Blanco");
    Auto auto3("Ford", "Fiesta", 2018, "Azul eléctrico");

    std::cout << auto1.marca << '\n';
    std::cout << auto1.modelo << '\n';
    std::cout << auto1.year << '\n';
    std::cout << auto1.color << '\n';
    std::cout << '\n';

    std::cout << auto2.marca << '\n';
    std::cout << auto2.modelo << '\n';
    std::cout << auto2.year << '\n';
    std::cout << auto2.color << '\n';
    std::cout << '\n';

    std::cout << auto3.marca << '\n';
    std::cout << auto3.modelo << '\n';
    std::cout << auto3.year << '\n';
    std::cout << auto3.color << '\n';
    std::cout << '\n';

    return 0;
}
