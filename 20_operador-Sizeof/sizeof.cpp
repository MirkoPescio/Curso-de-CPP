#include <iostream>
#include <string>


int main()
{

    // sizeof() ==> determina el tamaño en bytes de un:
    //              variable, data type, clase, objeto, etc

    double gpa = 2.5;
    std::string nombre = "Mirko Pescio";
    char grado = 'C';
    bool estudiante = true;
    char puntuaciones[] = {'S', 'A', 'B', 'C', 'D', 'F'};
    std::string estudiantes[] = {"Bob Esponja", "Patricio", "Calamardo"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n"; // Es lo mismo

    std::cout << "La cadena: '" << nombre << "' ocupa " << sizeof(nombre) << " bytes." << '\n';
    std::cout << "La cadena: '" << grado << "' ocupa " << sizeof(grado) << " byte." << '\n';
    std::cout << "El booleano 'estudiante': " << estudiante << " ocupa " << sizeof(estudiante) << " byte." << '\n';
    std::cout << "El Array: '" << puntuaciones << "' ocupa " << sizeof(puntuaciones) << " bytes.\n\n";
    std::cout << "El Array: 'estudiantes' ocupa " << sizeof(estudiantes) << " bytes." << '\n';
    std::cout << "y sus elementos " << sizeof(estudiantes[0]) << ", " << sizeof(estudiantes[1]) << " y " << sizeof(estudiantes[2]) << " bytes respectivamente\n\n";

    return 0;
}
