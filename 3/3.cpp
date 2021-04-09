#include <iostream>

int main() {
    size_t a, b, c, t;
    std::cin >> a >> b >> c >> t;
    size_t hours_in_t = -1, minutes_in_t = -1, seconds_in_t = -1;
    size_t r;
    if (t > (a * b * c))
        t = t % (a * b * c);
    while (t > 0) {
        if (c > t) {
            hours_in_t = 0, minutes_in_t = 0, seconds_in_t = t;
        } else if (c == t) {
            hours_in_t = 0, minutes_in_t = 1, seconds_in_t = 0;
        } else if (b > (t / c)) {
            hours_in_t = 0, minutes_in_t = t / c, seconds_in_t = t % c;
        } else if (b == (t / c)) {
            hours_in_t = 1, minutes_in_t = 0, seconds_in_t = 0;
        } else if (a > (t / (b * c))) {
            hours_in_t = t / (b * c), minutes_in_t = (t / c) % b, seconds_in_t = t % c;
        } else if (a == t / (b * c)) {
            hours_in_t = 0, minutes_in_t = 0, seconds_in_t = 0;
            break;
        }
        t -= hours_in_t * c * b + minutes_in_t * c + seconds_in_t;
    }
    std::cout << hours_in_t << ' ' << minutes_in_t << ' ' << seconds_in_t << std::endl;
}
