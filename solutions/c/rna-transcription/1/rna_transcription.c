#include "rna_transcription.h"

char dnaSequence[] = "GCTA";
char rnaSequence[] = "CGAU";

char *to_rna(const char *dna)
{
    char *rna = (char *)malloc(strlen(dna) + 1);

    if(dna[0] == '\0')
    {
        rna[0] = '\0';
        return rna;
    }

    for(int i = 0; i < (int)strlen(dna); i++)
    {
        for(int j = 0; j < (int)strlen(dnaSequence); j++)
        {
            if(dna[i] == dnaSequence[j])
            {
                rna[i] = rnaSequence[j];
            }                
        }
    }

    return rna;
}