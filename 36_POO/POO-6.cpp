#include <iostream>


class Pizza {
    public:
        std::string ingrediente1;
        std::string ingrediente2;

    Pizza() {}
    Pizza(std::string ingrediente1) {
        this->ingrediente1 = ingrediente1;
    }
    Pizza(std::string ingrediente1, std::string ingrediente2) {
        this->ingrediente1 = ingrediente1;
        this->ingrediente2 = ingrediente2;
    }
};

int main() {

    Pizza pizza1("Muzzarella");
    Pizza pizza2("Muzzarella", "Jamón");
    Pizza pizza3();

    std::cout << pizza1.ingrediente1 << '\n' << '\n';

    std::cout << pizza2.ingrediente1 << '\n';
    std::cout << pizza2.ingrediente2 << '\n' << '\n';

    if (pizza3) {
        std::cout << "A esta pizza le hace falta ingredientes\n";
    }

    return 0;
}
