#include <iostream>
#include <string>
#include <sstream>
#include <set>

bool is_glasniy(char c) {
    std::set<char> gl = {'a', 'e', 'i', 'o', 'u', 'y'};
    return gl.count(c);
}

bool is_soglasniy(char c) {
    return !is_glasniy(c);
}

int main() {
    std::string name;
    std::cin >> name;
    std::istringstream in(name);
    char prev, curr;
    in >> prev;
    bool res = true;
    while (in >> curr) {
        if ((is_glasniy(curr) && !is_soglasniy(prev)) ||
            (is_soglasniy(curr) && !is_glasniy(prev))) {
            res = false;
            break;
        }
        prev = curr;
    }
    std::cout << ((res) ? "YES" : "NO") << std::endl;
}
