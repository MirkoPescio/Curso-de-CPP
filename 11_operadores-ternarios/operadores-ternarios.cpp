#include <iostream>


int main() {

    // Los operadores ternarios ?: = reemplazan a las implementaciones de if/else
    // La estructura es:   condición ? expresión1 : expresión2

    float nota = 6.5;

    // EXPRESION CON IF/ELSE:

    /* if (nota >= 7) {
        std::cout << "Aprobaste!!";
    } else {
        std::cout << "Desaprobaste";
    } */

    // EXPRESION CON OPERADORES TERNARIOS:

    nota >= 7 ? std::cout << "¡Aprobaste!" : std::cout << "Desaprobaste" << '\n';

    // Otras operaciones:

    int numero = 9;
    numero % 2 == 0 ? std::cout << numero << " es par\n" : std::cout << numero << " es impar\n";

    bool hambre = false;
    hambre ? std::cout << "Todavía tenés hambre\n" : std::cout << "Ya estás satisfecho/a\n"; // 1° forma de expresarlo
    std::cout << (hambre ? "Todavía tenes hambre\n" : "Ya estás satisfecho/a\n"); // 2° forma de expresarlo

    return 0;
}
