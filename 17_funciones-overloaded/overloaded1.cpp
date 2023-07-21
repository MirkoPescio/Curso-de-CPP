#include <iostream>


void pizza();
void pizza(std::string ingrediente1);
void pizza(std::string ingrediente1, std::string ingrediente2);

int main() {

    pizza();
    pizza("Muzzarella");
    pizza("queso", "palmitos");

    return 0;
}

void pizza() {
    std::cout << "Ya está tu pizza!" << '\n';
}
void pizza(std::string ingrediente1) {
    std::cout << "Ya está tu pizza de " << ingrediente1 << "!" << '\n';
}
void pizza(std::string ingrediente1, std::string ingrediente2) {
    std::cout << "Ya está tu pizza de " << ingrediente1 << " y " << ingrediente2 << "!" << '\n';
}
