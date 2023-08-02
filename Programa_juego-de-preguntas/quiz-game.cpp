#include <iostream>


int main() {

    std::string preguntas[] = {"1. ¿En qué año se creó C++?: ",
                               "2. ¿Quién inventó C++?: ",
                               "3. ¿Cuál es el predecesor de C++?: ",
                               "4. ¿La Tierra es plana?: "};

    std::string opciones[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"}, 
                                 {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                 {"A. C", "B. C+", "C. C--", "D. B++"},
                                 {"A. Si", "B. No", "C. A veces", "D. ¿Qué es La Tierra?"}};

    char respuestasClaves[] = {'C', 'B', 'A', 'B'};

    int cantidad = sizeof(preguntas)/sizeof(preguntas[0]);
    char miOpcion;
    int puntaje;

    for (int i = 0; i < cantidad; i++) {
        std::cout << "********************************\n";
        std::cout << preguntas[i] << '\n';
        std::cout << "********************************\n";

        for (int j = 0; j < sizeof(opciones[i])/sizeof(opciones[i][0]); j++) {
            std::cout << opciones[i][j] << '\n';
        }

        std::cin >> miOpcion;
        miOpcion = toupper(miOpcion);

        if (miOpcion == respuestasClaves[i]) {
            std::cout << "CORRECTO\n";
            puntaje++;
        } else {
            std::cout << "Incorrecto\n";
            std::cout << "La respuesta era: " << respuestasClaves[i] << '\n';
        }
    }

    std::cout << '\n';
    std::cout << "********** RESULTADOS **********\n";
    std::cout << "Tu puntaje final es de: " << puntaje << "/4\n";
    std::cout << "********************************\n";

    return 0;
}
