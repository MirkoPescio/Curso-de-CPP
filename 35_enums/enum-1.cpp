#include <iostream>


enum Dias {
    Domingo = 0,
    Lunes = 1,
    Martes = 2,
    Miercoles = 3,
    Jueves = 4,
    Viernes = 5,
    Sabado = 6
};

// Otros ejemplos de Enums:

enum Sabores {
    Vainilla,
    Chocolate,
    MentaGranizada,
    Mascarpone
};

enum Colores {
    Rojo,
    Azul,
    Naranja,
    Amarillo,
    Violeta,
    Blanco,
    Celeste
};

enum Planetas {
    Mercurio = 4880,
    Venus = 12104,
    Tierra = 12756,
    Marte = 6794,
    Jupiter = 142984,
    Saturno = 108728,
    Urano = 51118,
    Neptuno = 49532,
    Pluton = 2320
};

int main() {

    /* Enum (Enumeración), que también se conoce como enumeración, es un tipo de datos definido por el usuario que permite
    crear un nuevo tipo de datos que tiene un rango fijo de valores posibles, y la variable puede seleccionar un
    valor del conjunto de valores. */

    Dias hoy = Jueves;

    /* switch (hoy)
    {
    case Domingo:
        std::cout << "Es Domingo!" << '\n';
        break;
    case Lunes:
        std::cout << "Es Lunes!" << '\n';
        break;
    case Martes:
        std::cout << "Es Martes!" << '\n';
        break;
    case Miercoles:
        std::cout << "Es Miercoles!" << '\n';
        break;
    case Jueves:
        std::cout << "Es Jueves!" << '\n';
        break;
    case Viernes:
        std::cout << "Es Viernes!" << '\n';
        break;
    case Sabado:
        std::cout << "Es Sabado!" << '\n';
        break;
    } */

    switch (hoy)
    {
    case 0:
        std::cout << "Es Domingo!" << '\n';
        break;
    case 1:
        std::cout << "Es Lunes!" << '\n';
        break;
    case 2:
        std::cout << "Es Martes!" << '\n';
        break;
    case 3:
        std::cout << "Es Miercoles!" << '\n';
        break;
    case 4:
        std::cout << "Es Jueves!" << '\n';
        break;
    case 5:
        std::cout << "Es Viernes!" << '\n';
        break;
    case 6:
        std::cout << "Es Sabado!" << '\n';
        break;
    }

    return 0;
}