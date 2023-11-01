//write include statement for decisions header
#include "decisions.h"
#include <vector>

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


vector<int> vector_of_primes(int n)
{
  int i;
  vector<int> result;
  for(i=2;i<=n;i++)
  {
    if(is_prime(i))

  result.push_back(i);

  }

return result;

}


bool is_prime(int n)
{
 int i;
 bool prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      prime = false;
      break;
    }
  }

return prime;

}