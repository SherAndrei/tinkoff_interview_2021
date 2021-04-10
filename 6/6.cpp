#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    size_t npeople, nslices;
    size_t last_slise_pos;
    std::cin >> nslices >> npeople;
    size_t min_i = 0;
    std::vector<size_t> ntimes(npeople);

    int current_time = 0;
    nslices -= npeople;

    for (size_t i = 0; i < ntimes.size(); i++) {
        std::cin >> ntimes[i];
        if (ntimes[i] < ntimes[min_i])
            min_i = i;
    }

    if (nslices == 0) {
        std::cout << *std::max(ntimes.begin(), ntimes.end()) << std::endl;
        return 0;
    }
    do {
        current_time++;
        for (int i = 0; i < ntimes.size() && nslices > 0; i++) {
            if (current_time % (2 * ntimes[i]) == 0) {
                if (nslices - 1 == 0) {
                    if (ntimes[i] > ntimes[min_i])
                        continue;
                }
                nslices--;
                last_slise_pos = i;
            }
        }
    } while (nslices > 0);
    std::cout << current_time + ntimes[last_slise_pos] << std::endl;
}
