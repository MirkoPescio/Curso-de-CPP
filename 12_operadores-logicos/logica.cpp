#include <iostream>


int main() {

    // && = checkea si 2 condiciones son verdaderas
    // || = checkea si al menos una de las 2 condiciones son verdaderas
    // !  = invierte la lógica de los operadores que se estén implementando

    int temperatura;

    std::cout << "Ingrese la temperatura (en grados Celsius): ";
    std::cin >> temperatura;

    if (temperatura <= 10 && temperatura >= 0) {
        std::cout << "El clima es relativamente frío";
    }
    else if (temperatura > 10 && temperatura < 30) {
        std::cout << "El clima es agradable";
    }
    else if (temperatura < 0) {
        std::cout << "El clima es demasiado frío. ¡Abríguese bien!";
    }
    else if (temperatura >= 30 && temperatura < 60) {
        std::cout << "El clima es caluroso";
    }
    else {
        std::cout << "Seguramente estés en un desierto o en otro planeta";
    }

    int temperatura2;
    std::cout << "\nIngrese un nuevo valor de temperatura (en grados Celsius): ";
    std::cin >> temperatura2;

    if (temperatura2 <= 0 || temperatura2 >= 30) {
        std::cout << "El clima actual no es agradable";
    } else {
        std::cout << "El clima actual es agradable";
    }

    bool soleado = false;

    if (!soleado) {
        std::cout << "\nEstá nublado";
    } else {
        std::cout << "\nEsta soleado";
    }

    return 0;
}
