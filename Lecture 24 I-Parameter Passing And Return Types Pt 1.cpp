// passing varaibles and addresses

//#include<iostream>
//using namespace std;
//void swap(int *x , int *y)  // a,b are different
//{
//	int c; // x and y arepointers to a and b ---> they store the adderss of a and b
//	c=*x;       // to get a,b from x and y we need to dereference the pointer
//	*x=*y;
//	*y=c;
//	cout << "The swapping is complete"<<endl; 
//}
//int main()
//{
//	int a,b;
//	a=3;
//	b=4;
//	/* int c
//	c=a;
//	a=b;
//	b=c; */
//	swap(&a,&b);  //passing the address of a and b using function 
//	cout << "The value of a and b after the swap are : "<<a<<" "<<b;
//	return 0;
//}

// PASSING ARRAYS INTO FUNCTIONS

#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout << "values for comparision"<<endl;
	
	cout << "The value of a        is"<<a<<endl;
	cout << "The value of a[0] is "<<&a[0]<<endl;
	cout << "The value of a[1] is "<<&a[1]<<endl;

}