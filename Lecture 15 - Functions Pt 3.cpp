// How to write a function
 
//	int compare(int a, int b)  // compare 2 integers and return the greatest
//	{
//		int c;
//		if(a>b)
//		{
//			c = a;
//		}
//		else
//		{
//			c = b;
//		}
//		// Now c will store the minimum of a,b
//		
//		return c;
//	}


//int compare(int a, int b)
//{
//	if(a>b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}

//int compare (int a, int b)
//{
//	if(a==5)
//	{
//		return 1;
//	}
//	return 0;
//}


// HOW WE EXACTLY CALLING A FUNCTION

#include<iostream>
using namespace std;
int sum(int a , int b)
{
	int c;
	 c=a+b;
	 return c;
}
int main()
{
	int a,b;
	
	a=3;
	b=5;
	
	int c;
	
	c=sum(a,b);
	cout << c;
	
	return 0;
}
