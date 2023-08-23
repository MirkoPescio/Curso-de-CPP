#include <iostream>


int main() {

    // Memoria que se almacena después de que el programa sea compilado y ejecutado

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "Dirección: " << pNum << '\n';
    std::cout << "Valor: " << *pNum << '\n';

    delete pNum;

    return 0;
}
