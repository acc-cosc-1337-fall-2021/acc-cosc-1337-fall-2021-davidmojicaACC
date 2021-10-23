//add include statements
#include "func.h"
//add function code here

double get_gc_content(const string& dna)
{
    auto gc = 0.0;
    int letters = 0;
    for(int i=0; i<dna.length(); ++i)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gc++;
        }
        letters++;
    }
    return gc/letters;

}

string get_dna_complement(string dna)
{
    for(int i = 0; dna[i]; ++i)
    {
        if(dna[i] == 'A')
        {
            dna[i] = 'T';
        }
        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        else if(dna[i] == 'G')
        {
            dna[i] = 'C';
        }
        else if(dna[i] == 'C')
        {
            dna[i] = 'G';
        }
    }
    return reverse_string(dna);
}

string reverse_string(string dna)
{
    string reverse;
    for(int i = dna.length()-1; i >= 0; --i)
    {
        reverse.push_back(dna[i]);
    }
    return reverse;
}

