#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter value for a:");
    scanf("%d", &a);

    printf("Enter value for b:");
    scanf("%d", &b);

    //Arithmetic Operators

    c = a + b;

    printf("\nAddition is: %d", c);

    c = a - b;

    printf("\n Subtraction is: %d", c);

    c = a * b;

    printf("\n Multiplication is: %d", c);

    c = a / b;

    printf("\n Division is: %d", c);

    c = a % b;

    printf("\n Modulus is: %d", c);

    //Pre and Post Increment and Decrement

    printf("\nPre-Increment is: %d", ++a); // a=7

    printf("\nPost-Increment is: %d", a++);

    printf("A is: %d", a);

    printf("\nPre-Decrement is: %d", --b); //b=6

    printf("\nPost-Decrement is: %d", b--);

    printf("B is: %d", b);

    return 0;
}
