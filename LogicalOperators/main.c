#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;

    printf("Enter value for A:");
    scanf("%d", &A);

    printf("Enter value for B:");
    scanf("%d", &B);

    //Logical Operators

    if(A && B)
        printf("This is A && B\n");
    if(A || B)
        printf("This is A || B\n");
    if(!(A && B))
        printf("This is !(A && B)\n");

    return 0;
}
