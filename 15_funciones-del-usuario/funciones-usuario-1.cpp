#include <iostream>


void saludo() {
    std::cout << "Buen/as día/tardes/noches!\n";
}

int main() {

    saludo(); // Llamada a la función

    // puedo llamarla todas las veces que necesite para no tener que reescribir código
    // También porque sería una mala práctica hacerlo

    saludo();
    saludo();
    saludo();

    return 0;
}
