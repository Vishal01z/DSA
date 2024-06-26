#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {4, 2, 3, 1, 5};
    std::sort(vec.begin(), vec.end());
    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
