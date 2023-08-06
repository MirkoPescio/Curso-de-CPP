#include <iostream>


int obtenerNumero(const int numero);
int sumaNumerosImpares(const std::string numeroDeTarjeta);
int sumaNumerosPares(const std::string numeroDeTarjeta);

int main() {

    // odd: impar
    // even: par

    std::string numeroDeTarjeta;
    int resultado = 0;

    std::cout << "Ingrese un número de tarjeta de crédito/débito #: ";
    std::cin >> numeroDeTarjeta;

    resultado = sumaNumerosPares(numeroDeTarjeta) + sumaNumerosImpares(numeroDeTarjeta);

    if (resultado % 10 == 0) {
        std::cout << numeroDeTarjeta << " es válido";
    } else {
        std::cout << numeroDeTarjeta << " no es válido";
    }

    return 0;
}

int obtenerNumero(const int numero) {

    return numero % 10 + (numero / 10 % 10);
}

int sumaNumerosImpares(const std::string numeroDeTarjeta) {

    int suma = 0;

    for (int i = numeroDeTarjeta.size() - 1; i >= 0; i-=2) {
        suma += obtenerNumero(numeroDeTarjeta[i] - '0');
    }

    return suma;
}

int sumaNumerosPares(const std::string numeroDeTarjeta) {

    int suma = 0;

    for (int i = numeroDeTarjeta.size() - 2; i >= 0; i-=2) {
        suma += obtenerNumero((numeroDeTarjeta[i] - '0') * 2);
    }

    return suma;
}
