#include<string>
#include<iostream>
#include "int.h"

using std::string; using std::cout; using std::cin;


double get_sales_commission(double sales)
{
    if (sales >= 1500)
    {
        auto sales_commission = sales * 0.08;
        return sales_commission;
    }
    else if (sales <= 1499 && sales >= 1000)
    {
       double sales_commission = sales * 0.07;
       return sales_commission;
    }
    else if (sales <= 999 && sales >= 500)
    {
        double sales_commission = sales * 0.06;
        return sales_commission;

    }
    else if (sales <= 499 && sales >= 0)
    {
        double sales_commission = sales * 0.05;
        return sales_commission;

    }
    else if (sales<= 0)
    {
        cout<<"The number cannot be less then 0. ";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    }
    //return 0;  

}