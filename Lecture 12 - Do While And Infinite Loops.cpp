//WHILE LOOP
//#include <iostream>
//using namespace std;
//int main()
//{
//	int password;
//	
//	cout<<"Enter the password: "<<endl;
//	cin>>password;
//	
//	while(password<01246633)
//	{
//		cout << "The password does not meet the required conditions, please enter password again"<<endl;
//		cin>>password;
//	}
//	cout << "The user has now entered a correct password"<<endl;
//	
//	return 0;
//}

// DO WHILE
//#include <iostream>
//using namespace std;
//int main()
//{
//	int password;
//	
//	while(password<99)
//	{
//		cout <<"99";
//		cin >> password;
//	}
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int password;
//	int count=0;
//	while (1) // the condition in the while loop, until it is true, the loop will run
//	{
//		cout << "choclates ";
//		count++;
//		
//		if(count>100) break;
//	}
//}

#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;  ; i++)
	{
		cout<<i<<" ";
		if(i>100) break; // This statement gets executed when i is 101
	}
	return 0;
}