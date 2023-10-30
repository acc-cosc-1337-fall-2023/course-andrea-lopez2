#include<iostream>
#include "decimals.h"
#include <vector>


int main()
{

    int  n;
    char user_choice = 'y';
    std::vector <int> recieve;
    recieve = get_primes(n); // storing the returned vector in recieve



	do
	{

        cout << "Enter a positive integer: ";
        cin >> n;

        if(n > 60) 
        {
            cout<<"Please, provide number in the range of 1 to 60 ";
        }
        else 
        {
            // displaying the recieved vector
            cout<<endl<<"Return vector of " << n << " with elements --> ";
            for (int element : get_primes(n)){
                cout << element << " ";
            }
        }
		cout<<"\n"<<"Want to display other prime (Enter y or Y)? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice =='Y');



  return 0;


}