#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cin >> a;
	if(a > 0.01)
	{
		cout << "The condition in if statement is correct";
	}
}

#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cout << "Give 2 floating point numbers as input";
	cin >> a >> b;
	if(a > 0.01)
	{
		cout << "The condition in if statement is correct";
	}
}

#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cout << "Give 2 floating point numbers as input" << endl;
	cin >> a >> b;
	if(a > 0.01 && b > a)
	{
		cout << "The condition in if statement is correct";
	}
}

#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cout << "Give 2 floating point numbers as input" << endl;
	cin >> a >> b;
	if(a > 0.01 || b > a)
	{
		cout << "The condition in if statement is correct";
	}
	else
	{
		cout << "The condition is false";
	}
}

#include <iostream>
using namespace std;

int main()
{
	int marks;
	cout << "Student, please enter the marks to calculate the grade: ";
	cin >> marks;

	if(marks > 90)
	{
		cout << "A";
	}
	if(marks < 90 && marks > 80)
	{
		cout << "B";
	}
	if(marks < 80 && marks > 70)
	{
		cout << "C";
	}
	if(marks < 70)
	{
		cout << "Pass";
	}
}

#include <iostream>
using namespace std;

int main()
{
	int marks;
	cout << "Student, please enter the marks to calculate the grade: ";
	cin >> marks;

	if(marks > 90)
	{
		cout << "A";
	}
	else if(marks > 80)
	{
		cout << "B";
	}
	if(marks > 70)
	{
		cout << "C";
	}
	else
	{
		cout << "Pass";
	}
}

#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "Enter an integer a: ";
	cin >> a;

	switch(a)
	{
		case 1:
			cout << "The value of a is 1";
			break;
		case 2:
			cout << "The value of a is 2";
			break;
		default:
			cout << "Default will always be printed";
			break;
	}

	return 0;
}
