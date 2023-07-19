#include <iostream>


int main() {

    char op;
    double num1;
    double num2;
    double resultado;

    std::cout << "**************** Calculadora ****************\n";

    std::cout << "Ingrese el operador (+ - * /): ";
    std::cin >> op;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            std::cout << "resultado: " << resultado << '\n';
            break;
        case '-':
            resultado = num1 - num2;
            std::cout << "resultado: " << resultado << '\n';
            break;
        case '*':
            resultado = num1 * num2;
            std::cout << "resultado: " << resultado << '\n';
            break;
        case '/':
            resultado = num1 / num2;
            std::cout << "resultado: " << resultado << '\n';
            break;
        default:
            std::cout << "No se reconoce el operador ingresado" << '\n';
            break;
    }

    std::cout << "*********************************************\n";

    return 0;
}
