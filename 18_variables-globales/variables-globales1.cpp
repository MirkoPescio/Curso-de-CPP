#include <iostream>


int miNumeroGlobal = 3;

void imprimirNumeroLocal();
void imprimirNumeroGlobal();

int main() {

    int miNumeroLocal = 1;

    imprimirNumeroLocal();
    std::cout << '\n';
    imprimirNumeroGlobal();

    return 0;
}

void imprimirNumeroLocal() {
    int miNumeroLocal = 2;
    std::cout << miNumeroLocal;
}
void imprimirNumeroGlobal() {
    std::cout << miNumeroGlobal;
}