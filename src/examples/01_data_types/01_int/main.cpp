
#include "int.h"
#include <iostream>
#include<string>
 

int main()
{

	char user_choice = 'y';
    double sales = 0;
    double result = 0;

	do
	{
        cout<<"Please enter number of sales: ";
        cin>> sales;

	    result = get_sales_commission(sales);
	    cout<<"Sales of: "<<sales<< "  yields a commission of -> "<<result<<"\n";

		cout<<"Want to calculate other commision (Enter y or Y)? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice =='Y');

	return 0;


}