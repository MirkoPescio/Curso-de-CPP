#include <iostream>
template <typename T, typename U>


/* int max(int x, int y) {
    return (x > y) ? x : y;
}

double max(double x, double y) {
    return (x > y) ? x : y;
}

char max(char x, char y) {
    return (x > y) ? x : y;
} */

auto max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {

    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.1) << '\n';
    std::cout << max('1', '2') << '\n';
    std::cout << max(1, 2.1) << '\n';

    return 0;
}
