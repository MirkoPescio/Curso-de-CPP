#include <iostream>


double obtenerTotal(double precios[], int cantidadPrecios);

int main() {

    double precios[] = {968.00, 4374.35, 459.00, 480.00};
    int cantidadPrecios = sizeof(precios)/sizeof(precios[0]);
    double total = obtenerTotal(precios, cantidadPrecios);

    std::cout << "Total: $" << total << '\n';

    return 0;
}

double obtenerTotal(double precios[], int cantidadPrecios) {
    double total = 0;

    for (int i = 0; i < cantidadPrecios; i++) {
        total += precios[i];
    }

    return total;
}
