//cpp
#include<iostream>
#include "char.h"
#include <algorithm>

/*
Function get_char_ascii_value with a char parameter

@param char-a character
@return the ASCII value of the character
*/
string transcribe_dna_into_rna(string rna)
{
  //std::string rna = "example stringyyy";
  std::replace( rna.begin(), rna.end(), 'T', 'U'); 

  return rna;

}