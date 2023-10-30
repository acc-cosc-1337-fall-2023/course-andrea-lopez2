#include<iostream>
#include "string.h"

using std::string;

string transcribe_dna_into_rna(string rnDNA)
{

string updatedrna;
switch (rnDNA) 
    {
		case "G": 
            updatedrna = updatedrna + "G";
		case "A": 
            updatedrna = updatedrna + "A";
		case "T": 
            updatedrna = updatedrna + "U";
		case "C": 
            updatedrna = updatedrna + "C";
	
		}

    return updatedrna;
}