#include <iostream>
#include <string>
using namespace std;


int main() {

    const int arrayCantidad = 9; // Podemos determinar la cantidad de elementos que queramos en el array
    string comidas[arrayCantidad];
    int cantidad = sizeof(comidas)/sizeof(comidas[0]);
    string temporal;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese una comida que le guste (o ingrese 'q' para terminar de ingresar) #" << i + 1 << ": ";
        getline(cin, temporal);
        if (temporal == "q") {
            break;
        } else {
            comidas[i] = temporal;
        }
    }

    cout << "Te gusta la siguiente lista:\n";

    for (int i = 0; !comidas[i].empty(); i++) {
        cout << comidas[i] << '\n';
    }

    return 0;
}
