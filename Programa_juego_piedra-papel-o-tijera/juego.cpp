#include <iostream>
#include <ctime>


char obtenerEleccionDelUsuario();
char obtenerEleccionDeLaComputadora();

void mostrarEleccion(char eleccion);
void elegirGanador(char jugador, char computadora);


int main() {

    char jugador;
    char computadora;

    jugador = obtenerEleccionDelUsuario();
    std::cout << "Tu elección: ";
    mostrarEleccion(jugador);

    computadora = obtenerEleccionDeLaComputadora();
    std::cout << "Elección de la computadora: ";
    mostrarEleccion(computadora);

    elegirGanador(jugador, computadora);

    return 0;
}


char obtenerEleccionDelUsuario() {

    char jugador;
    std::cout << "Juego: Piedra, Papel o Tijera\n";

    do {
        std::cout << '\n' << "Elija una de las siguientes opciones" << '\n';
        std::cout << "*****************************\n";
        std::cout << "'r' para piedra\n";
        std::cout << "'p' para papel\n";
        std::cout << "'s' para tijera\n";

        std::cin >> jugador;
        std::cout << jugador << '\n';
    } while (jugador != 'r' && jugador != 'p' && jugador != 's');

    return jugador;
}

char obtenerEleccionDeLaComputadora() {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    
    default:
        break;
    } 

    return 0;
}

void mostrarEleccion(char eleccion) {

    switch (eleccion)
    {
    case 'r':
        std::cout << "Piedra\n";
        break;
    case 'p':
        std::cout << "Papel\n";
        break;
    case 's':
        std::cout << "Tijera\n";
        break;
    
    default:
        break;
    }
}

void elegirGanador(char jugador, char computadora) {

    switch (jugador)
    {
    case 'r':
        if (computadora == 'r'){
            std::cout << "\nEmpate\n";
        }
        else if (computadora == 'p') {
            std::cout << "\nGana la computadora\n";
        }
        else {
            std::cout << "\nGanaste!!\n";
        }
        break;
    case 'p':
        if (computadora == 'r') {
            std::cout << "\nGanaste!!\n";
        }
        else if (computadora == 'p') {
            std::cout << "\nEmpate\n";
        }
        else {
            std::cout << "\nGana la computadora\n";
        }
        break;
    case 's':
        if (computadora == 'r') {
            std::cout << "\nGana la computadora\n";
        }
        else if (computadora == 'p') {
            std::cout << "\nGanaste!!\n";
        }
        else {
            std::cout << "\nEmpate\n";
        }
        break;
    default:
        break;
    }
}
