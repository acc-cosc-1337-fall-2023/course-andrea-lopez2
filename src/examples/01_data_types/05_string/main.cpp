

#include<iostream>
#include "string.h"


int main()
{
    string orig_dna = "GATGGAACTTGACTACGTAAATT";

    string updated_dna = transcribe_dna_into_rna(orig_dna);
    cout<<endl<<" " << orig_dna << " returns --> " << updated_dna << " \n";
            

  return 0;


}