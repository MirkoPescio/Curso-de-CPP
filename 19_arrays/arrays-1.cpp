#include <iostream>
#include <string>


int main() {

    std::string autos[] = {"Volkswagen", "Ford", "Audi", "Nissan"};

    autos[0] = "Chevrolet"; // Reemplazo el valor del array autos en la ubicación 0  => 'Volkswagen' por 'Chevrolet' 

    std::cout << autos[0] << '\n';
    std::cout << autos[1] << '\n';
    std::cout << autos[2] << '\n';
    std::cout << autos[3] << '\n';

    // También se puede asignar los valores por separado, sin embargo, es obligatorio determinar la cantidad de
    // elementos del array.
    // Repitiendo el ejemplo anterior sería:

    std::cout << '\n';

    std::string autos2[4];

    autos2[0] = "Volkswagen";
    autos2[1] = "Ford";
    autos2[2] = "Audi";
    autos2[3] = "Nissan";

    std::cout << autos2[0] << '\n';
    std::cout << autos2[1] << '\n';
    std::cout << autos2[2] << '\n';
    std::cout << autos2[3] << '\n';

    return 0;
}
