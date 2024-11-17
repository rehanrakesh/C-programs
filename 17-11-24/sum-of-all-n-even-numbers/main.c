/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int N, sum = 0;
    printf("Enter a number N: ");
    scanf("%d", &N);
    
    for (int i = 2; i <= N; i += 2) 
    { 
        sum += i; 
    }
    printf("The sum of all even numbers up to %d is: %d\n", N, sum);

    return 0;
}
