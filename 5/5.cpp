#include <vector>
#include <iostream>

int main() {
    size_t npeople;
    std::cin >> npeople;
    std::vector<size_t> heights(npeople);
    for (auto& height : heights)
        std::cin >> height;

    size_t counter = 1;
    size_t current_height;
    for (size_t i = 0; i < heights.size(); i++) {
        current_height = heights[i];
        for (size_t j = i + 1; j < heights.size(); j++) {
            if (current_height <= heights[j]) {
                counter++;
                current_height = heights[j];
            }
        }
        std::cout << counter << " \n"[i == heights.size() - 1];
        counter = 1;
    }
}
