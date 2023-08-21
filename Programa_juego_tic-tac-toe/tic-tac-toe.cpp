#include <iostream>
#include <ctime>


void escribirTablero(char *espacios);
void movimientoJugador(char *espacios, char jugador);
void movimientoComputadora(char *espacios, char computadora);
bool checkearGanador(char *espacios, char jugador, char computadora);
bool checkearEmpate(char *espacios);

int main() {

    char espacios[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char jugador = 'X';
    char computadora = 'O';
    bool ejecutando = true;

    escribirTablero(espacios);

    while (ejecutando) {
        movimientoJugador(espacios, jugador);
        escribirTablero(espacios);
        if (checkearGanador(espacios, jugador, computadora)) {
            ejecutando = false;
            break;
        }
        else if (checkearEmpate(espacios)) {
            ejecutando = false;
            break;
        }

        movimientoComputadora(espacios, computadora);
        escribirTablero(espacios);
        if (checkearGanador(espacios, jugador, computadora)) {
            ejecutando = false;
            break;
        }
        else if (checkearEmpate(espacios)) {
            ejecutando = false;
            break;
        }
    }

    std::cout << "\nGracias por jugar!!\n";

    return 0;
}

void escribirTablero(char *espacios) {
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  "  << espacios[0] << "  |  "  << espacios[1] << "  |  "  << espacios[2] << "   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  "  << espacios[3] << "  |  "  << espacios[4] << "  |  "  << espacios[5] << "   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  "  << espacios[6] << "  |  "  << espacios[7] << "  |  "  << espacios[8] << "   " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void movimientoJugador(char *espacios, char jugador) {
    int numero;
    do{
        std::cout << "Ingrese un lugar para colocar un marcador (1-9): ";
        std::cin >> numero;
        numero--;
        if (espacios[numero] == ' ') {
            espacios[numero] = jugador;
            break;
        }
    } while (!numero > 0 || !numero < 8);
}

void movimientoComputadora(char *espacios, char computadora) {
    int numero;
    srand(time(0));

    while (true) {
        numero = rand() % 9;
        if (espacios[numero] == ' ') {
            espacios[numero] = computadora;
            break;
        }
    }
}

bool checkearGanador(char *espacios, char jugador, char computadora) {

    if ((espacios[0] != ' ') && (espacios[0] == espacios[1]) && (espacios[1] == espacios[2])) {
        espacios[0] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[3] != ' ') && (espacios[3] == espacios[4]) && (espacios[4] == espacios[5])) {
        espacios[3] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[6] != ' ') && (espacios[6] == espacios[7]) && (espacios[7] == espacios[8])) {
        espacios[6] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[0] != ' ') && (espacios[0] == espacios[3]) && (espacios[3] == espacios[6])) {
        espacios[0] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[1] != ' ') && (espacios[1] == espacios[4]) && (espacios[4] == espacios[7])) {
        espacios[1] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[2] != ' ') && (espacios[2] == espacios[5]) && (espacios[5] == espacios[8])) {
        espacios[2] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[0] != ' ') && (espacios[0] == espacios[4]) && (espacios[4] == espacios[8])) {
        espacios[0] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else if ((espacios[2] != ' ') && (espacios[2] == espacios[4]) && (espacios[4] == espacios[6])) {
        espacios[2] == jugador ? std::cout << "¡GANASTE!\n" : std::cout << "Perdiste\n";
    }
    else {
        return false;
    }

    return true;
}

bool checkearEmpate(char *espacios) {

    for (int i = 0; i < 9; i++) {
        if (espacios[i] == ' ') {
            return false;
        }
    }

    std::cout << "¡EMPATE!\n";
    return true;
}
