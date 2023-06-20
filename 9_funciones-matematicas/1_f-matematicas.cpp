#include <iostream>
#include <cmath>


int main() {

    double x = 3;
    double y = 4;
    double n = 3.74;
    double z;

    // z = std::min(x, y); // Encuentra el máximo entre 2 números: 4
    // z = std::max(x, y); // Encuentra el mínimo entre 2 números: 3
    // z = pow(2, 3); // Función exponencial: 2**3 = 8
    // z = sqrt(16); // Encuentra la raíz cuadrada
    // z = abs(-3); // Encuentra el valor absoluto
    // z = round(n); // Convierte el número a entero
    // z = ceil(n); // Encuentra el techo del número (redondea hacia arriba)
    z = floor(n); // Redondea hacia abajo

    std::cout << z << '\n';

    return 0;
}

/* Mas funciones matemáticas en
www.cplusplus.com/reference/cmath
*/
