//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float a,b;
//	
//	cin >> a;
//	if(a>0.01)
//	{
//		cout << "The condition in if statement is correct";
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float a,b;
//	
//	cout << "Give 2 floating point numbers as input";
//	cin >> a >> b;
//	if(a>0.01 )
//	{
//		cout << "The condition in if statement is correct";
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float a,b;
//	
//	cout << "Give 2 floating point numbers as input"<<endl;;
//	cin >> a >> b;
//	if(a>0.01 && b>a) // 1 and 0 // The first statement is true and second statement is false : a=2 and b=1.9
//	{
//		cout << "The condition in if statement is correct";
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	float a,b;
//	
//	cout << "Give 2 floating point numbers as input"<<endl;;
//	cin >> a >> b;
//	if(a>0.01 || b>a) // 1 and 0 // The first statement is true and second statement is false : a=2 and b=1.9
//	{
//		cout << "The condition in if statement is correct";
//	}
//	else 
//	{
//		cout <<"The condition is false ";
//	}
//}


// IF STATEMENT

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//	int marks;
//	cout <<"Student, please enter the marks to calculate the grade : ";
//	cin>>marks;
//	
//	if(marks>90)
//	{
//		cout <<"A";
//	}
//	if(marks<90 && marks > 80)
//	{
//		cout <<"B";
//	}
//	if(marks<80 && marks > 70)
//	{
//		cout <<"C";
//	}
//	if(marks<70)
//	{
//		cout <<"Pass";
//	}
//}

// ELSE STAEMENT

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//	int marks;
//	cout <<"Student, please enter the marks to calculate the grade : ";
//	cin>>marks;
//	
//	if(marks>90)
//	{
//		cout <<"A";
//	}
//	else if(marks>80)
//	{
//		cout <<"B";
//	}
//	if(marks > 70)
//	{
//		cout <<"C";
//	}
//	else  // If we use else we dont want to mention condition...// If we use else if we used to mention condition...
//	{
//		cout <<"Pass";
//	}
//}


#include <iostream>
using namespace std;

int main()
{
	int a;
//	cout << "GIve three integers as input : a,b,c"<<endl;
//	cin >> a >> b >>c >> d;
//	
//	if(a>b && c>d)
//	{
//		cout << "haha";
//	}
//	else if(a>b && c<d)
//	{
//		cout << "hehe";
//	}
//	else (a<b && c>d)
//	{
//		cout << "huhu";
//	}

cout << "enter a integer a ";
cin >> a;

switch(a) // TO the condition in this paranthesis // It will first evaluate the value to switch paranthesis 
{
	case 1:
		cout << "The value of a is 1 ";
		break;
	case 2:
		cout << "The value of a is 2 ";
		
	default:
		cout << "default will be always printed";
		break;
}
return 0;
}