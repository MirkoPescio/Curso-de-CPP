#include <iostream>


class Animal {
    public:
        bool vive = true;
    void come() {
        std::cout << "Este animal está comiendo\n";
    }
};

class Perro : public Animal {
    public:

    void ladrido() {
        std::cout << "¡Woof!\n";
    }
};

class Gato : public Animal {
    public:

    void maullido() {
        std::cout << "¡Meow!\n";
    }
};

int main() {

    // Herencia => una clase que recibe atributos y métodos de otra clase
    //             Ayuda a reutilizar código similar de múltiples clases

    Perro perro;
    Gato gato;

    std::cout << perro.vive << '\n';
    perro.come();
    perro.ladrido();
    std::cout << '\n';

    std::cout << gato.vive << '\n';
    gato.come();
    gato.maullido();
    std::cout << '\n';

    return 0;
}