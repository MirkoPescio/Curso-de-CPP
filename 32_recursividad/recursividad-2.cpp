#include <iostream>


int factorial(int num); 

int main() {

    std::cout << factorial(10);

    return 0;
}

// Solución sin recursividad

/* int factorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }

    return resultado;
} */

// Solución aplicando recursividad

int factorial(int num) {
    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}
