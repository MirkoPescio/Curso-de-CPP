#include <iostream>


class Forma {
    public:
        double area;
        double volumen;
};

class Cubo : public Forma {
    public:
        double lado;
    Cubo(double lado) {
        this->lado = lado;
        this->area = lado * lado * 6;
        this->volumen = lado * lado * lado;
    }
};

class Esfera : public Forma {
    public:
        double radio;
    Esfera(double radio) {
        this->radio = radio;
        this->area = 4 * 3.14159 * (radio * radio);
        this->volumen = (4/3.0) * 3.14159 * (radio * radio * radio);
    }
};

int main() {

    Cubo cubo(10);
    Esfera esfera(5);

    std::cout << "El área del cubo de lado " << cubo.lado <<  "u es de: " << cubo.area << " u**2\n";
    std::cout << "El volumen del cubo de lado " << cubo.lado << "u es de: " << cubo.volumen << " u**3\n\n";

    std::cout << "El área de la esfera de radio " << esfera.radio <<  "u es de: " << esfera.area << " u**2\n";
    std::cout << "El volumen de la esfera de radio " << esfera.radio << "u es de: " << esfera.volumen << " u**3\n\n";

    return 0;
}
