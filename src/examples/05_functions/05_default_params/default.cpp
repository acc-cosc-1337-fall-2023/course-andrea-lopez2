//add include statements
#include <iostream>
//#include "func.h"
#include "default.h"

using namespace std;

using std::string;

//add function code here

double get_gc_content(const string &dna)
{
    int gc = 0;
    int sequence_len = dna.length();
    
        for (int i = 0; i < sequence_len; i++)
        {
        char dnaU = (char)toupper(dna[i]);
        switch(dnaU)
        {
            case 'C':
            case 'G':
                gc++;
                break;
        } 
        //if ((dnaU == 'C') || (dnaU == 'G'))
        //{
        //    gc++;
        //}

        }
    
    return (double)gc / sequence_len;
}

string get_dna_complement(string dna)
{
    string dna_comp = "";
    string dna_revert = get_reverse_string(dna);
    // cout << "dna_revert : " << dna_revert << "\n";
    int i=0;
    int sequence_len = dna.length();

    while(i<sequence_len)
    {
        if (dna_revert[i]  == 'A') 
        {
            dna_comp = dna_comp + 'T';
        }
        else if (dna_revert[i]  == 'T') 
        {
            dna_comp = dna_comp + 'A';
        }
        else if (dna_revert[i]  == 'C') 
        {
            dna_comp = dna_comp + 'G';
        }
        else if (dna_revert[i]  == 'G') 
        {
            dna_comp = dna_comp + 'C';
        }
        else 
        {
            dna_comp = dna_comp + dna_revert[i];
        }
        i++;
    }

    return dna_comp;
}

string get_reverse_string(string dna)
{

    string reverse = "";
    int sequence_len = dna.length();

    for (int i = sequence_len - 1; i >= 0; i--)
    {
        //cout << "i : " << i << "\n";
        char dnaU = (char)toupper(dna[i]);
        reverse = reverse + dnaU;
    }

    return reverse;
}

string get_dna_complament (string dna)
{
    

}

