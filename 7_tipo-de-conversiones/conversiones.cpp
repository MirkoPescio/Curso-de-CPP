#include <iostream>


int main() {

    double x = (int) 3.14;
    char n = 100;

    std::cout << x << '\n';
    std::cout << n << '\n'; // Me devuelve el caracter correspondiente
                            // al número 100 según el código ascii: 'd'
    
    int preguntas = 10;
    int correctas = 8;
    double puntaje = correctas / (double)preguntas * 100;

    std::cout << puntaje << '%' << '\n';

    return 0;
}

