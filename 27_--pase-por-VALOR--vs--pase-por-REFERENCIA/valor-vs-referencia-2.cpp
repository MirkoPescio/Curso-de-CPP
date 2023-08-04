#include <iostream>


void intercambio(std::string &x, std::string &y);

int main() {

    std::string x = "Coca-Cola";
    std::string y = "Agua";
    std::string temporal;

    intercambio(x, y);

    temporal = x;
    x = y;
    y = temporal;

    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';

    return 0;
}

void intercambio(std::string &x, std::string &y) {
    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';
}

// Como resultado final obtenemos la repetición de 2 direcciones en memoria
