#include <algorithm>
#include <vector>
#include <iostream>

size_t price_wo_box(size_t min, size_t max, size_t np) {
    return (max - min) * np * np;
}

int main() {
    size_t npackages, boxsize, boxprice;
    std::cin >> npackages >> boxsize >> boxprice;
    std::vector<size_t> pprices(npackages);
    for (auto& pprice : pprices)
        std::cin >> pprice;
    size_t sum = 0;
    size_t curr_size = 1;
    size_t min_size = -1;
    size_t min_price_wo_box = -1;
    size_t curr_price_wo_box = -1;

    for (auto it = pprices.begin(); it != pprices.end();) {
        curr_price_wo_box = price_wo_box(*it, *it, curr_size);
        min_price_wo_box = curr_price_wo_box;
        min_size = curr_size;

        for (curr_size = 2;
             curr_size <= std::min(boxsize, (size_t)std::distance(it, pprices.end()));
             curr_size++) {
            auto minmax = std::minmax_element(it, std::next(it, curr_size));
            size_t min = *minmax.first;
            size_t max = *minmax.second;

            curr_price_wo_box = price_wo_box(*minmax.first, *minmax.second, curr_size);
            if (curr_price_wo_box < min_price_wo_box + boxprice) {
                min_price_wo_box = curr_price_wo_box;
                min_size = curr_size;
            }
        }
        sum += min_price_wo_box + boxprice;
        it = std::next(it, min_size);
        curr_size = 1;
    }
    std::cout << sum << std::endl;
}

/*
    INCORRECT ON
    6 3 8
    1 3 2 2 2 1 = 32
*/
