#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Swapping with third variable

    int a=3, b=5;
    //int temp;

//    printf("Before Swapping a=%d and b=%d is-\n", a,b);
//
//    temp = a;
//    a = b;
//    b= temp;
//
//    printf("After Swapping a=%d and b=%d is-", a,b);

    //Swapping without using third variable

    //First Method + and -

//    a = a + b; // 3 + 5= 8
//    b = a - b; // 8 - 5= 3
//    a = a - b; // 8 - 3= 5
//
//     printf("After Swapping a=%d and b=%d is-", a,b);

     //Second Method * and /

//    a = a * b; // 3 * 5= 15
//    b = a / b; // 15 / 5= 3
//    a = a / b; // 15 / 3= 5
//
//     printf("After Swapping a=%d and b=%d is-", a,b);

     //Third Method : X-OR operator

    a = a ^ b; // 3 ^ 5= 0011 ^ 0101 = 0110= 6
    b = a ^ b; // 6 ^ 5= 0110 ^ 0101 = 0011= 3
    a = a ^ b; // 6 ^ 3= 0110 ^ 0011 = 0101= 5

     printf("After Swapping a=%d and b=%d is-", a,b);

    return 0;
}
