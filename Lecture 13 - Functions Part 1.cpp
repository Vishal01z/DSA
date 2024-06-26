#include <iostream>

using namespace std;

// Function to calculate the factorial of a number (non-negative integer)
int factorial(int n) {
  if (n < 0) { // Handle negative input (optional error handling)
    cout << "Error: Factorial is not defined for negative numbers." << endl;
    return -1; // Indicate an error
  } else if (n == 0) {
    return 1; // Base case: factorial of 0 is 1
  } else {
    // Recursive case: factorial(n) = n * factorial(n-1)
    return n * factorial(n - 1);
  }
}

// Function to calculate the area of a rectangle (both arguments must be positive)
double rectangleArea(double length, double width) {
  if (length <= 0 || width <= 0) { // Check for non-positive values (optional error handling)
    cout << "Error: Length and width must be positive values." << endl;
    return -1.0; // Indicate an error
  } else {
    return length * width;
  }
}

int main() {
  int num;

  cout << "Enter a non-negative number to calculate its factorial: ";
  cin >> num;

  int result = factorial(num);

  if (result != -1) { // Check for error returned by factorial function
    cout << "Factorial of " << num << " is: " << result << endl;
  }

  double length, width;

  cout << "\nEnter the length and width of a rectangle (positive values): ";
  cin >> length >> width;

  double area = rectangleArea(length, width);

  if (area != -1.0) { // Check for error returned by rectangleArea function
    cout << "Area of the rectangle: " << area << endl;
  }

  return 0;
}
