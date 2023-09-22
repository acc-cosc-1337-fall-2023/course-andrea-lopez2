//write include statements
#include "repetition.h"
#include <iostream>

using namespace std;

using std::cin; 
using std::cout;

//write using statements

//get variable num from the user.  ***
int main()
{
    auto answer = 'y';
    do
    {
        int choice = 0;
        cout<<"\n";
        cout<<"1) Get Factorial. " <<endl;
        cout<<"2) Get the Greatest Common Divisor. " <<endl;
        cout<<"3) Exit. " <<endl;
        cin >> choice;

        if(choice == 1)
        {
            int num;
            cout<<"Please enter a positive number: ";
            cin>> num;

            int fact = value_return_factorial(num);
                cout<<"Factorial of: "<<num<<" is -> "<<fact<<"\n";

        }

        else if(choice == 2)
        {
            int num1, num2;
            cout<<"Please enter a positive number: ";
            cin>> num1;
            cout<<"Please enter a second positive number: ";
            cin>> num2; 

            if(num1 < 0 || num2 < 0)
            {
                cout<<"Error! GDC of a zero or negative numbers doesn't exist.\n";

            }
            else
                {
                int greatest = value_return_gcd(num1, num2);
                    cout<<"The Greatest Common Divisor of: "<<num1<< ", " <<num2<< "  is-> "<< greatest<<"\n";
                }

        }

        else if(choice == 3)
        {
        
            cout<<"Are you sure you want to exit? (if not press n/N) ";
            cin>> answer;
        }


    }
    while(answer == 'N' || answer == 'n');


}
