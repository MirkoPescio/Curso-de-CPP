#include <iostream>
#include <ctime>


int main() {

    srand(time(0));
    int randNumero = rand() % 5 + 1;

    switch (randNumero) {
    case 1:
        std::cout << "Ganaste un código de descuento del 20% de descuento para tu próximo curso de Coderhouse" << '\n';
        break;
    case 2:
        std::cout << "Sos un/a nuevo/a participante para un torneo de Fortnite" << '\n';
        break;
    case 3:
        std::cout << "Sos un/a nuevo/a participante para un torneo de Fifa 23" << '\n';
        break;
    case 4:
        std::cout << "Ganaste un curso gratuito de Análisis de datos => empresa Nucba" << '\n';
        break;
    case 5:
        std::cout << "Sos un/a nuevo/a participante para un torneo de E-Football" << '\n';
        break;
    }

    return 0;
}