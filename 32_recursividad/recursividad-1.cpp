#include <iostream>


void caminata(int pasos);

int main() {

    // La recursividad es una técnica de programación que busca resolver un problema sustituyéndolo por otros 
    // problemas de la misma categoría, pero más simples implementando un algoritmo recursivo.

    // Una función recursiva es una función que se llama a sí misma.

    // Se dice que un algoritmo es recursivo si dentro del cuerpo del algoritmo y de forma directa o indirecta 
    // se realiza una llamada a él mismo.

    // Las funciones recursivas tienen similitud con los bucles, pero no están basados en una declaración condicional. 
    // La función se llama siempre que se requiere el mismo código para ejecutarse de forma reiterada.

    caminata(100);

    return 0;
}

void caminata(int pasos) {

    if (pasos >= 0) {
        std::cout << "Pasos restantes: " << pasos + 1 << '\n';
        caminata(pasos - 1);
    }
}
