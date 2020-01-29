#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c; // Varaible Declaration
    clrscr();

    printf("Enter Value for variable a:");
    scanf("%d", &a);   // %d= Format Specifier  // &= address of operator and ampersand

    printf("Enter Value for variable b:");
    scanf("%d", &b);

    c = a + b; //Expression

    printf("The Addition of Two Numbers: %d", c);

    getch();  //get character
}
