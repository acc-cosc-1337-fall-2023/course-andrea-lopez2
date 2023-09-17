//write include statements
#include "decisions.h"
#include <iostream>

using namespace std;
using std::cout;
using std::cin;

int main() 
{
	
	int choice;
	cout << "1) Get letter grade using if. " << endl;
	cout << "2) Get letter grade using switch. " << endl;
	cout << "3) Exit " << endl;
	cin >> choice;

	//int grade;

	if(choice == 1)
	{
		int grade = 0;
		cout << "Please enter a grade: ";
		cin >> grade;

		if(grade < 0 || grade > 100)
		{
			cout << "  The grade you entered is not in range (0 - 100). \n";
		}
		else if(grade >= 0 && grade <= 100)
		{
			string letter = get_letter_grade_using_if(grade);
			cout << "(IF) You got a -> " << letter << endl;
		}
	}
	else if(choice == 2)
	{
		int grade = 0;
		cout << "Please enter a grade: ";
		cin >> grade;

		if(grade < 0 || grade > 100)
		{
			cout << "  The grade you entered is not in range (0 - 100). \n";
		}
		else 
		{
			string letter = get_letter_grade_using_switch(grade);
			cout << "(SWITCH) You got a -> " << letter << endl;
		}
		
	}

	cout << "Exiting";

	return 0; 
}

