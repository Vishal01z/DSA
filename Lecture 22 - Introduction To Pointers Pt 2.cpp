//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int *p;
//	p=&a;
//	a=1;
//	cout<<"The value of a is(from the actual variable type)"<<a<<endl;
//	cout<<"The value of from the pointer using *(astreix/ indirection operator) "<<*p<<endl;
//	
//	return 0;
//} 


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int *p;
//	p=&a;
//	a=2;  // I am only changing the value, but the address of a is still the same, so the ponier will still point to the same a no matter how the a is being change
//	*p=3;
//	cout<<"The value of a is(from the actual variable type)"<<a<<endl;
//	cout<<"The value of from the pointer using *(astreix/ indirection operator) "<<*p<<endl;
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int b;
//	
//	int c;
//	int *p;
//	int *q;
//	p=&a;
//	q=&b;
//	a=2;
//	b=5;  // I am only changing the value, but the address of a is still the same, so the ponier will still point to the same a no matter how the a is being change
//	c = *p+*q;
//	
//	cout << "The value of c is : "<<c;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	
	int c;
	int *p;
	int *q;
	p=&a;
	q=&b;
	a=2;
	b=5;  // I am only changing the value, but the address of a is still the same, so the ponier will still point to the same a no matter how the a is being change
	c = *p+*q;
	
	p+1;
	q+2;
	
	cout << "The value of c is : "<<c<<endl;
	cout <<"The address a is "<<&a<<"The value of the pointer is "<<p;
	return 0;
}