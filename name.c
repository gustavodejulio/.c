#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9

typedef struct
{
    string name;
    int vote;
} candidate;

int main(int argc, string argv[])
{
    // Size of the array
    candidate candidates[MAX];

    //Lenght of candidates
    int candidate_count = argc - 1;

    int voter_count = get_int("Number of voters: ");

    //Loop of the votes according to the candidates count (should be voter count)
    for(int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        printf("%s \n", candidates[i].name);
        for(int j = 0; j < i; j++)
        {
            if(strcmp(candidates[i].name, argv[j]))
            {
                candidates[i].vote += 1;
                printf("Found %i\n", candidates[i].vote);
            }
        }
        /*if(strcmp(candidates[i].name, argv[i]))
        {
            printf("Found\n");
        }
        printf("%s\n", candidates[i].name);*/
    }

}