#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;

    printf("Enter value for A:");
    scanf("%d", &A);

    printf("Enter value for B:");
    scanf("%d", &B);

    //Relational Operators

    if(A == B)
        printf("A is equal to B\n");
    if(A > B)
        printf("A is greater than B\n");
    if(A != B)
        printf("A is not equal to B\n");
    if(B != A)
        printf("A is not equal to B\n");
    if(A < B)
        printf("A is less than B\n");
    if(A >= B)
        printf("A is greater than and equal to B\n");
    if(A <= B)
        printf("A is less than and equal to B\n");

    return 0;
}


//if()
//{
//
//}
//else
//{
//
//}
//
//
//
//if()
//{
//
//}
//else if()
//{
//
//}
//else
//{
//
//}
