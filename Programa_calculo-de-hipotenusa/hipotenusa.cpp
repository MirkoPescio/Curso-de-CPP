#include <iostream>
#include <cmath>


int main() {

    double cateto_1;
    double cateto_2;

    std::cout << "Ingrese el valor del cateto n°1: ";
    std::cin >> cateto_1;

    std::cout << "Ingrese el valor del cateto n°2: ";
    std::cin >> cateto_2;

    double formula = pow(cateto_1, 2) + pow(cateto_2, 2);
    double resultado_final = sqrt(formula);

    std::cout << "El valor de la hipotenusa según los datos ingresados es de: " << resultado_final << " u**2" << '\n';

    return 0;
}
