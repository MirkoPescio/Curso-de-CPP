#include <iostream>


/* class Cocina{
    public:
        int temperatura = 0;
}; */

class Cocina{
    private:
        int temperatura = 0;
    public:
        int obtenerTemperatura() {
            return temperatura;
        }
        void cambiarTemperatura(int temperatura) {
            if (temperatura < 0) {
                this->temperatura = 0;
            }
            else if (temperatura >= 10) {
                this->temperatura = 10;
            }
            else {
                this->temperatura = temperatura;
            }
        }
};

int main() {

    // Getter = función que hace leíble (READABLE) un atributo privado
    // Setter = función que hace editable (WRITEABLE) un atributo privado

    Cocina cocina;

    // cocina.temperatura = 1000000;
    // Si los atributos de la clase son privados 'private', el atributo no puede modificarse ni ser leída
    // std::cout << "La temperatura seleccionada es de: " << cocina.temperatura << "°C" << '\n';

    cocina.cambiarTemperatura(400);

    std::cout << "La temperatura seleccionada es de: " << cocina.obtenerTemperatura() << "°C" << '\n';

    return 0;
}
