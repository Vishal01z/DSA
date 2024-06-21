// WHILE LOOPS

#include <iostream>
using namespace std;
int main()
{
//	int i;
//	i=1;   // initialization
//	while(i<101)  // Condition
//	{
//		cout << i <<" ";  // loop
//		i++;              // Update
//	}
	int i;
	int input;
	
	// guess the number 65
	// the user has 100 chances
	i=100;
    
    for(i=1; i<101;i++)
    {
    	cin >> input;
    	if(input == 65) // if thde input is exactly 65
    	{
    		cout << "Congrats you have guess correct ";
    		break;
		}
	}
}