#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void insertionSort(std::vector<T>& arr, bool(*compare)(T, T)) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        T key = arr[i];
        int j = i - 1;
        while (j >= 0 && compare(arr[j], key)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

bool customCompare(int a, int b) {
    return a > b; // Sort in descending order
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    insertionSort(arr, customCompare);
    std::cout << "Sorted array in descending order: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
