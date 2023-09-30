//add include statements
#include <iostream>
#include "func.h"

using namespace std;

using std::string;

//add function code here

double get_gc_content(const string& dna)
{
    int gc = 0;
    int sequence_len = dna.length();
    
        for (int i = 0; i < sequence_len; i++)
        {
            char dnaU = (char)toupper(dna[i]);
            if ((dnaU == 'C') || (dnaU == 'G'))
        {
            gc++;
        }
        
        }
    
    return (double)gc / sequence_len;
}

string reverse_string(string dna)
{
    string s_reverse="";
    int sequence_len = dna.length();
    
    for (int i = sequence_len-1; i >=0 ; i--)
    {
        char dnaU = (char)toupper(dna[i]);
        s_reverse = s_reverse + dnaU;
    }
     return s_reverse;

}

string get_dna_complement(string dna)
{
    string r_string = reverse_string(dna);
    string s_reverse="";
    int sequence_len = dna.length();
    int i = 0;

    while(i < sequence_len)
    {

        if (r_string[i] == 'A')
        {
            s_reverse = s_reverse + 'T';
        }
        else if (r_string[i] == 'T')
        {
            s_reverse = s_reverse + 'A';
        }
        else if(r_string[i] == 'C')
        {
            s_reverse = s_reverse + 'G';
        }
        else if(r_string[i] == 'G')
        {
            s_reverse = s_reverse + 'C';
        }
        else
        {
            s_reverse = s_reverse + r_string[i];
        }
        i++;
    }

    return s_reverse; 

}
 
