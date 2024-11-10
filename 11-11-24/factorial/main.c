/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial using a for loop
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}

