/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int maxOfThree(int a, int b, int c) 
{
    if (a >= b && a >= c) 
    {
        return a; 
    } 
    else if 
        (b >= a && b >= c) 
        {
        return b; 
    }
    else
    {
        return c; 
    }
}

int main() 
{
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int largest = maxOfThree(a, b, c);
    printf("The largest number is: %d\n", largest);

    return 0;
}
