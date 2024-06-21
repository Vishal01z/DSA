#include <iostream>
using namespace std;

int main() {
    int a[10];  // Array size should be 10 to hold 10 integers
    int i;
    
    cout << "Give 10 integers as input" << endl;
    
    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }
    
    cout << "The 10 given inputs in reverse order are: " << endl;
    
    for (i = 9; i >= 0; i--) {
        cout << a[i] << " ";
    }
    
    return 0;
}
