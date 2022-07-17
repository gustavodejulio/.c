#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main (void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+55-11-99347-6500";

    people[1].name = "David";
    people[1].number = "+55-67-96358-0020";
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "David") == 0)
        {
            printf("Found: %s\n", people[i].number);
        }
    }
}