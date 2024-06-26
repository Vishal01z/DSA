// Example to illustrate instability
#include <iostream>
#include <vector>
#include <utility> // For std::pair

int main() {
    std::vector<std::pair<int, char>> arr = {{4, 'a'}, {3, 'b'}, {3, 'c'}, {1, 'd'}};
    // After sorting by the first element, 'b' and 'c' may change their relative order
    selectionSort(arr);
    for (const auto& p : arr) {
        std::cout << "{" << p.first << ", " << p.second << "} ";
    }
    std::cout << std::endl;
    return 0;
}
