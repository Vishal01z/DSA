#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void selectionSort(std::vector<T>& arr, bool(*compare)(T, T)) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (compare(arr[j], arr[minIndex])) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

bool customCompare(int a, int b) {
    return a > b; // Sort in descending order
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr, customCompare);
    std::cout << "Sorted array in descending order: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
