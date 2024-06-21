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
//	
//	//cout << "The value of c is " << c << endl;
//	return c;
//}
//void swap(int a , int b)
//{
//	
//	int c;
//	c=a;;
//	a=b;
//	b=c;
//	cout << "The values of a and b after swapping inside the function are: " << a << " " <<b << endl;
//return;
//}
//int main()
//{
//	PrintHi();  // First calling printHi function
//	int a,b;
//	int c;
//	a=4;
//	b=6;
//	swap(a,b);
//	cout << "The values of a and b after swapping outside the function are: " << a << " " <<b << endl;
//
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
//	
//	//cout << "The value of c is " << c << endl;
//	return c;
//}
//void swap(int &a , int &b)
//// By including the keyword & After the name of the datatype and before the variable we are able to change the actual parameter
//{
//	
//	int c;
//	c=a;;
//	a=b;
//	b=c;
//	cout << "The values of a and b after swapping inside the function are: " << a << " " <<b << endl;
//return;
//}
//int main()
//{
//	PrintHi();  // First calling printHi function
//	int a,b;
//	int c;
//	a=4;
//	b=6;
//	swap(a,b);
//	cout << "The values of a and b after swapping outside the function are: " << a << " " <<b << endl;
//
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
	
	//cout << "The value of c is " << c << endl;
	return c;
}
void swap(int &a , int &b)
// By including the keyword & After the name of the datatype and before the variable we are able to change the actual parameter
{
	
	int c;
	c=a;
	a=b;
	b=c;
	cout << "The values of a and b after swapping inside the function are: " << a << " " <<b << endl;
return;
}
void fun (int &a , int &b)
{
	a=99999;
	b=99999;
	cout << "The value of a and b inside fun function are: " << a <<" " << b << endl;
}
int main()
{
	PrintHi();  // First calling printHi function
	int a,b;
	int c;
	a=4;
	b=6;
	cout << "The value of a and b before passing into fun function are: " << a <<" " << b << endl;

	fun(a,b);
	cout << "The values of a and b after passing into the function are: " << a << " " <<b << endl;

	return 0;
}