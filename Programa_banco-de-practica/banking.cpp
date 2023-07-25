#include <iostream>
#include <iomanip>


void mostrarBalance(double balance);
double deposito();
double retiro(double balance);

int main()
{

    double balance = 123.01;
    int eleccion = 0;

    do
    {
        std::cout << "****************************\n";
        std::cout << "Ingrese su elección\n";
        std::cout << "****************************\n\n";
        std::cout << "1. Mostrar balance (dinero en cuenta)\n";
        std::cout << "2. Depositar\n";
        std::cout << "3. Retirar dinero\n";
        std::cout << "4. Salir\n";

        std::cin >> eleccion;

        std::cin.clear();
        fflush(stdin);

        switch (eleccion)
        {
        case 1:
            mostrarBalance(balance);
            break;
        case 2:
            balance += deposito();
            mostrarBalance(balance);
            break;
        case 3:
            balance -= retiro(balance);
            mostrarBalance(balance);
            break;
        case 4:
            std::cout << "Gracias por elegirnos!\n";
            break;

        default:
            std::cout << "Opción no válida\n";
            break;
        }
    } while (eleccion != 4);

    return 0;
}

void mostrarBalance(double balance) {
    std::cout << "Tu balance actual es de: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposito() {

    double cantidad = 0;

    std::cout << "Ingrese la cantidad que va a depositar: ";
    std::cin >> cantidad;
    std::cout << '\n';

    if (cantidad > 0) {
        std::cout << "Depositando dinero...\n";
        return cantidad;
    } else {
        std::cout << "No ingresó una cantidad válida para depositar\n";
        return 0;
    }
}

double retiro(double balance) {

    double cantidad = 0;

    std::cout << "Ingrese la cantidad que va a retirar: ";
    std::cin >> cantidad;
    std::cout << '\n';

    if (cantidad > balance) {
        std::cout << "Fondos insuficientes\n";
        return 0;
    }
    else if (cantidad < 0) {
        std::cout << "No es una cantidad válida\n";
        return 0;
    } 
    else {
        std::cout << "Retirando dinero...\n";
        return cantidad;
    }
}
