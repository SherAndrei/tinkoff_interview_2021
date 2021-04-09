#include <iostream>

int main() {
    int a, b, x, y;
    std::cin >> a >> b >> x >> y;
    if (a == x) {
        std::cout << b << ' ' << a << ' ' << x << ' ' << y << std::endl;
    } else if (a == y) {
        std::cout << b << ' ' << a << ' ' << y << ' ' << x << std::endl;
    } else if (b == x) {
        std::cout << a << ' ' << b << ' ' << x << ' ' << y << std::endl;
    } else if (b == y) {
        std::cout << a << ' ' << b << ' ' << y << ' ' << x << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
}
