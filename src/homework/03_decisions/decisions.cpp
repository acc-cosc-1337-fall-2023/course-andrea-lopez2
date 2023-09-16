//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letter;
    if (grade <= 100 && grade >= 90)
    {
        letter = "A";
    }
    else if (grade <= 89 && grade >= 80)
    {
        letter = "B";
    }
    else if (grade <= 79 && grade >= 70)
    {
        letter = "C";
    }
    else if (grade <= 69 && grade >= 60)
    {
        letter = "D";
    }
    else if (grade <= 59 && grade>= 0)
    {
        letter = "F";
    }
    return letter;   
}


string get_letter_grade_using_switch(int grade)
{
    string letter;
    switch(grade)
    {
        case 90 ... 100:
          letter = "A";
        break;

        case 80 ... 89:
          letter = "B";
        break;

        case 70 ... 79:
        letter = "C";
        break;

        case 60 ... 69:
        letter = "D";
        break;

        case 0 ... 59:
        letter = "F";
        break;
    }
    return letter; 
}