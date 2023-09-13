#include "hwexpressions.h"

const double tax_rate = .0675;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double meal_charge_tax_amount(double tax_rate, double meal_amount)
{
	double result = tax_rate * meal_amount;
	return result;
}
double meal_charge_tip_amount(double meal_amount, double tip_rate)
{
	double result = meal_amount * tip_rate;
	return result;

}



