#include <iostream>


double cuadrado(double lado);
double cubo(double lado);

int main() {

    double lado = 5.0;
    double area = cuadrado(lado);
    double volumen = cubo(lado);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volumen: " << volumen << "cm^3\n";

    return 0;
}

double cuadrado(double lado) {
    return lado * lado;
}

double cubo(double lado) {
    return lado * lado * lado;
}
