#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=5, B=7;

    if(A&&B) //A=true, B=true: True && True= True
        printf("The result of A&&B\n");

    if(A&B) // A=5--> 0101 , B=7--> 0111= 1
        printf("The result of A&B");

    return 0;
}
