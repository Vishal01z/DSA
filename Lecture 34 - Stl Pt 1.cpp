#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, find, etc.
#include <numeric>   // For accumulate

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // Display the original vector
    std::cout << "Original vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Add elements to the vector
    numbers.push_back(60);
    numbers.push_back(70);

    // Display the updated vector
    std::cout << "Updated vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Display the sorted vector
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Reverse the vector
    std::reverse(numbers.begin(), numbers.end());

    // Display the reversed vector
    std::cout << "Reversed vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Find an element in the vector
    int target = 30;
    auto it = std::find(numbers.begin(), numbers.end(), target);

    if (it != numbers.end()) {
        std::cout << "Element " << target << " found at position: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the vector." << std::endl;
    }

    // Calculate the sum of all elements in the vector
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of all elements: " << sum << std::endl;

    return 0;
}

