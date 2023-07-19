#include <iostream>

// Vamos a ver un caso de cuando usar switch en lugar de ifs anidados
// Tiene que ver con la optimización del código

// ESTE CASO ES UNA MALA PRACTICA

/* int main() {

    int month;
    std::cout << "Ingrese el mes (n°) (1-12): ";
    std::cin >> month;

    if (month == 1) {
        std::cout << "Es Enero";
    }
    else if (month == 2) {
        std::cout << "Es Febrero";
    }
    else if (month == 3) {
        std::cout << "Es Marzo";
    }
    else if (month == 4) {
        std::cout << "Es Abril";
    }
    else if (month == 5) {
        std::cout << "Es Mayo";
    }
    else if (month == 6) {
        std::cout << "Es Junio";
    }
    else if (month == 7) {
        std::cout << "Es Julio";
    }
    else if (month == 8) {
        std::cout << "Es Agosto";
    }
    else if (month == 9) {
        std::cout << "Es Septiembre";
    }
    else if (month == 10) {
        std::cout << "Es Octubre";
    }
    else if (month == 11) {
        std::cout << "Es Noviembre";
    }
    else if (month == 12) {
        std::cout << "Es Diciembre";
    }
    else {
        std::cout << "Ingrese un dato válido";
    }

    return 0;
}
*/

// LO MAS OPTIMIZADO ES LO SIGUIENTE:

int main() {

    int month;
    std::cout << "Ingrese el mes (n°) (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "Es Enero";
        break;
    case 2:
        std::cout << "Es Febrero";
        break;
    case 3:
        std::cout << "Es Marzo";
        break;
    case 4:
        std::cout << "Es Abril";
        break;
    case 5:
        std::cout << "Es Mayo";
        break;
    case 6:
        std::cout << "Es Junio";
        break;
    case 7:
        std::cout << "Es Julio";
        break;
    case 8:
        std::cout << "Es Agosto";
        break;
    case 9:
        std::cout << "Es Septiembre";
        break;
    case 10:
        std::cout << "Es Octubre";
        break;
    case 11:
        std::cout << "Es Noviembre";
        break;
    case 12:
        std::cout << "Es Diciembre";
        break;
    default:
        std::cout << "Ingrese un dato válido";
        break;
    }

    return 0;
}
