#include <iostream>


class Autos {
    public:
        std::string marca;
        std::string modelo;
        int year;
        std::string color;

        void aceleracion() {
            std::cout << "Está apretando el acelerador\n";
        }

        void freno() {
            std::cout << "Apretó el freno\n";
        }
};

int main() {

    Autos auto1;
    Autos auto2;

    auto1.marca = "Ford";
    auto1.modelo = "Fiesta";
    auto1.year = 2021;
    auto1.color = "Azul";

    auto2.marca = "Chevrolet";
    auto2.modelo = "Spin";
    auto2.year = 2017;
    auto2.color = "Gris";


    std::cout << auto1.marca << '\n';
    std::cout << auto1.modelo << '\n';
    std::cout << auto1.year << '\n';
    std::cout << auto1.color << '\n';

    auto1.aceleracion();
    std::cout << '\n';

    std::cout << auto2.marca << '\n';
    std::cout << auto2.modelo << '\n';
    std::cout << auto2.year << '\n';
    std::cout << auto2.color << '\n';

    auto2.freno();
    std::cout << '\n';

    return 0;
}
