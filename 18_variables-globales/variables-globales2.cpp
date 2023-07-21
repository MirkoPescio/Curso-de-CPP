#include <iostream>


int miNumero = 3;

void imprimirNumero();

// Otra forma de imprimir variables globales es la siguiente (modificamos un poco el ejemplo anterior):

int main() {

    int miNumero = 1;

    // Las funciones reconocen que estoy llamando a la variable global
    imprimirNumero();
    std::cout << ::miNumero << '\n';

    return 0;
}

void imprimirNumero() {
    int miNumero = 2;
    std::cout << ::miNumero << '\n';
}