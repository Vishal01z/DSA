// First let us define a function
//#include <iostream>
//using namespace std;
//void PrintHi() // No parameters are required
//{
//	cout << "Hi" << endl;
//	return;
//}
//int sum(int a , int b)
//{
//	int c;
//	c=a+b;
//	return c;
//}
//int main()
//{
//	PrintHi();
//	int a,b;
//	a=4;
//	b=6;
//	int d;
//	d=sum(a,b);
//	cout << "The sum is equal to " << d;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void PrintHi() // No parameters are required
//{
//	cout << "Hi" << endl;
//	return;
//}
//int sum(int a , int b)
//{
//	int c;
//	c=a+b; // a+b will result in 10
//	a=500;
//	return c;
//}
//int main()
//{
//	PrintHi();  // First calling printHi function
//	int a,b;
//	int c;
//	a=4;
//	b=6;
//	// c=
//	int d;
//	d=sum(a,b);
//	// cout << "The sum is equal to " << d<<" "<<"The valu of a is"<<a;  // The value of a should turn out to be 500
//	cout << "The value of c is"<<c;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void PrintHi() // No parameters are required
//{
//	cout << "Hi" << endl;
//	return;
//}
//int sum(int a , int b)
//{
//	int c;
//	c=a+b; // a+b will result in 10 therefore the valueof c over here is 10
//	a=500;
//	return c;
//}
//int main()
//{
//	PrintHi();  // First calling printHi function
//	int a,b;
//	int c;
//	a=4;
//	b=6;
//    c= 75; // The value of c over here in the main function is 75
//	int d;
//	d=sum(a,b);
//	// cout << "The sum is equal to " << d<<" "<<"The valu of a is"<<a;  // The value of a should turn out to be 500
//	cout << "The value of c is "<<c;
//	return 0;
//}



#include<iostream>
using namespace std;
void PrintHi() // No parameters are required
{
	cout << "Hi" << endl;
	return;
}
int sum(int a , int b)
{
	int c;
	c=a+b; // a+b will result in 10
	a=500;
	
	cout << "The value of c is " << c << endl;
	return c;
}
int main()
{
	PrintHi();  // First calling printHi function
	int a,b;
	int c;
	a=4;
	b=6;
	c=75;
	int d;
	d=sum(a,b);
	// cout << "The sum is equal to " << d<<" "<<"The valu of a is"<<a;  // The value of a should turn out to be 500
	cout << "The value of c is "<<c<<endl;
	return 0;
}