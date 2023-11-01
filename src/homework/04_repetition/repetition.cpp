//add include statements
#include "repetition.h"
#include<iostream>
//#include <bits/stdc++.h>

using std::string;
using std::cin; using std::cout;

//add function(s) code here

int value_return_factorial(int num)
{
    int fact = 1;
    if (num <= 0)
    {
        cout<<"Error! Factorial of a zero or negative number doesn't exist.\n";
    }
    else 
    {
        for (int i = 1; i <= num; i++) 
        {
            fact = fact * i;
        }
        
    }

    return fact;

}

int value_return_gcd(int num1, int num2)
{
    int hcf;
    if( num2 > num1)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    for(int i = 1; i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i ==0)
        {
            hcf = i;
        }
    }


   return hcf;

}
