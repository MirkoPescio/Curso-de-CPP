#include <iostream>


class Humano {
    public:
        std::string nombre;
        std::string ocupacion;
        int edad;

        void comer() {
            std::cout << "Esta persona está comiendo\n";
        }
        void beber() {
            std::cout << "Esta persona está tomando/bebiendo\n";
        }
        void dormir() {
            std::cout << "Esta persona está durmiendo\n";
        }
};

int main() {

    Humano humano1;
    Humano humano2;

    humano1.nombre = "Damián";
    humano1.ocupacion = "Científico";
    humano1.edad = 59;

    humano2.nombre = "Cinthia";
    humano2.ocupacion = "Profesora";
    humano2.edad = 34;

    std::cout << humano1.nombre << '\n';
    std::cout << humano1.ocupacion << '\n';
    std::cout << humano1.edad << '\n';

    std::cout << '\n';

    humano1.comer();
    humano1.beber();
    humano1.dormir();

    std::cout << '\n';

    std::cout << humano2.nombre << '\n';
    std::cout << humano2.ocupacion << '\n';
    std::cout << humano2.edad << '\n';

    return 0;
}
