/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, evenSum = 0, oddSum = 0;
    printf("Enter a positive n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i; 
        }
    }
    printf("Sum of even numbers from 1 to %d: %d\n", n, evenSum);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, oddSum);

    return 0;
}
