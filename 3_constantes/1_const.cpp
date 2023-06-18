#include <iostream>

int main() {
    // Por lógica las constantes son inmutables
    // Por conveniencia son definidas siempre en mayúsculas

    const double PI = 3.14159;
    const double RADIO = 10;
    const double CIRCUNFERENCIA = 2 * PI * RADIO;

    const int VELOCIDAD_DE_LA_LUZ = 299792458;
    const int ANCHO = 1920;
    const int ALTO = 1080;

    std::cout << CIRCUNFERENCIA << " cm" << '\n';

    return 0;
}

