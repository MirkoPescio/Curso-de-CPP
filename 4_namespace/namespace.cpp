#include <iostream>

// Se usa para definir distintas versiones de una variable

namespace primero {
    int x = 1;
}

namespace segundo {
    int x = 2;
}

int main() {

    int x = 0;

    std::cout << primero::x << '\n';
    std::cout << segundo::x << '\n';
    std::cout << x << '\n';

    /*
    using std::cout;
    using std::string;

    string nombre = "Mirko";

    cout << "Hola " << nombre << '\n';
    */

    return 0;
}

/*
Otra forma de aplicar el namespace es la siguiente:

int main() {
    using namespace first;

    std::cout << x << '\n';

    return 0;
}
*/

/*
int main() {
    using namespace second;

    std::cout << x << '\n';

    return 0;
}
*/
