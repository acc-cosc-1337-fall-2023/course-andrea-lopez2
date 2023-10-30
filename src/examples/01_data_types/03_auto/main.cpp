#include<iostream>
#include "auto.h"
#include<string>

int main()
{

   int n;
   char user_choice = 'y';

	do
	{

        cout << "Enter a positive integer: ";
        cin >> n;

        if(n > 15) 
        {
            cout<<"Please, provide number in the range of 1 to 15 ";
        }
        else 
        {
            int fib_num = get_fib(n);
            // displaying the recieved vector
            cout<<endl<<"Fibonacci number of " << n << " is --> " << fib_num;
            
        }
		cout<<"\n"<<"Want to calculate other Fibonacci (Enter y or Y)? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice =='Y');



  return 0;


}