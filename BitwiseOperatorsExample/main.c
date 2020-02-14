#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A=3, B=5, C=0; //char = 1 byte

    //Bitwise Operators

//    printf("Enter value for A:");
//    scanf("%d", &A); //A=3--> 0000 0011
//
//    printf("Enter value for B:");
//    scanf("%d", &B); //B=5--> 0000 0101

    C = A & B; // 0000 0001= 1
    printf("AND Operator:%d\n", C);

    if(A | B); // 0000 0111=7
    printf("OR Operator\n");

    if(A ^ B); // 0000 0110=6
    printf("X-OR Operator\n");

    if(~A); // 1111 1100
    printf("~ Operator\n");

     // 0000 1100= 12 // 3 * 2 ^ 2= 12

    printf("Left Shift is: %d\n", A<<2);

    printf("Right Shift is: %d\n", B>>2); // 0000 0101 = 5 / 2 ^ 2= 5 / 4= 1

    return 0;
}
