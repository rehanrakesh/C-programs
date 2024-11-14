/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int findMax(int a, int b) 
{
    if (a > b) 
    {
        printf("A is greater");
        // return a;
    } 
    else {
        printf("B is greater");
        // return b;
    }
}

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    findMax(a,b);

    return 0;
}
