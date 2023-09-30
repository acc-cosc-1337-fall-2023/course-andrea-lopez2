#include <iostream>
#include "func.h"

using namespace std;
using std::string;
using std::cin;
using std::cout;

int main() 
{
	int choice;
	cout << "1) Get GC Content. " << endl;
	cout << "2) Get DNA Complement. " << endl;
	cout << "3) Exit. " << endl;
	cin >> choice;

	if (choice == 1)
	{
	string gc_content;
	cout << "Please enter the DNA string: ";
	cin >> gc_content;

	double result = get_gc_content(gc_content);
	cout << result << endl;

	}

	else if(choice == 2)
	{
	string dna_complement;
	cout << "Please enter the DNA string: ";
	cin >> dna_complement;

	string result = get_dna_complement(dna_complement);
	cout << result << endl;

	}

	else
	{
		cout << "Exiting." << endl;
	}

 	return 0;
}
