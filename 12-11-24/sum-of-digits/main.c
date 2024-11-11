/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n; 
    }
    while (n > 0) 
    {
        sum += n % 10; 
        n /= 10;   
    }
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
