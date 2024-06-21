//#include<iostream>
//using namespace std;
//int sum(int  a, int b) 
//	int c;
//	c=a+b;
//	a=10;
//	b=11;
//	 return c;
//}
//int main()
//{
//	int a,b;
//	
//	a=3;
//	b=5;
//	
//	int c;
//	cout << a << b << endl;  // these values are before I call the functions "SUM"
//	
//	c=sum(a,b);
//
//	
//	//int sum(int a, int b) // int a ---> a, int ---> b
//	
//	cout << c << endl;
//	cout << a << b << endl; // the values of a, b are after I call the function
//	
//	return 0;
//}


#include<iostream>
using namespace std;
int sum(int  , int ); // I have declared that a function called sum exists but the body is not formed yet
int main()
{
	int a,b;
	
	a=3;
	b=5;
	
	int c;
	cout << a << " " << b << endl;  // these values are before I call the functions "SUM"
	
	c=sum(a,b);

	
	//int sum(int a, int b) // int a ---> a, int ---> b
	
	cout << c << endl;
	cout << a << " " << b << endl; // the values of a, b are after I call the function
	
	return 0;
}
int sum(int a, int b)
{
	return a+b;
}
