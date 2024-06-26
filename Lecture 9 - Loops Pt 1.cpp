#include <iostream>

using namespace std;

int main() {
  int choice, num, sum = 0;

  cout << "Menu:\n";
  cout << "1. Enter numbers and find their sum (until you enter 0).\n";
  cout << "2. Print a multiplication table of a number.\n";
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
    case 1:
      cout << "Enter numbers (0 to quit): ";
      while (cin >> num && num != 0) { // Read until 0 or invalid input
        sum += num;
      }
      cout << "Sum: " << sum << endl;
      break;
    case 2:
      cout << "Enter a number for the multiplication table: ";
      cin >> num;
      cout << "Multiplication table of " << num << ":\n";
      for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
      }
      break;
    default:
      cout << "Invalid choice." << endl;
  }

  return 0;
}
