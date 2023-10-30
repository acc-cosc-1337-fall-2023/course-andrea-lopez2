//cpp
//header
#include<string>
#include<iostream>
#include "decimals.h"
#include<vector>
using namespace std;

/*
Write code for function named add_to_double_1 to add .3 3 times to incoming double parameter
*/

/*
Write code for function named add_to_double_1 to add .3 5 times to incoming double parameter
*/

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

std::vector<int> get_primes(int num)   // declare function of type vector <int>
{
    std::vector<int> primes{};  // declare vector to be returned to main 

    // adding elements to the vector
    for(int i=2; i<num; i++)
    {
        if (is_prime(i))
        {
            primes.push_back(i);
        }
    }
    
return primes;   // return vector to the main

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
