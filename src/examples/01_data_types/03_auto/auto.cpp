//cpp
#include<iostream>
#include "auto.h"
/*
Function auto_int creates an auto variable with named num with value 10 and returns it.

@param none
@return the num auto variable
*/

int get_fib(int fib)
{
    
int a = 0, b = 1, c, i; 
    if( fib == 0) 
        return a; 
    for(i = 2; i <= fib; i++) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 


}