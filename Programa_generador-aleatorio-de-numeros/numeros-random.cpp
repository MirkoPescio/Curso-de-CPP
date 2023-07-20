#include <iostream>


int main() {

    srand(time(NULL));

    int num1 = (rand() % 36) + 1; // Números entre 1 y 36
    int num2 = (rand() % 36) + 1;
    int num3 = (rand() % 36) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';


    return 0;
}