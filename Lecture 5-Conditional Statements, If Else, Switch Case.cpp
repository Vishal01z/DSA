#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int c, d;
	
	cout << "Input 4 Integers a, b, c, and d: ";
	
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	cout << (a > b || c > d);
		
	return 0;
}
