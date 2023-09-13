#include "hwexpressions.h"
#include <iostream>

using namespace std;

int main()
{
    double meal_amount;
    double tip_rate;
    double tax_amount;
    double tip_amount;
    double total;

    cout << "This program will display a receipt with meal amount, sales tax, tip, and total amount. ";
    cout << "Enter the meal amount: ";
    cin >> meal_amount;
    tax_amount = get_sales_tax_amount(meal_amount);
    

    cout << "Enter the tip rate: ";
    cin >> tip_rate;
    tip_amount = get_tip_amount(meal_amount, tip_rate);
    total = tip_amount + tax_amount + meal_amount;
    cout << total;

    return 0;
}