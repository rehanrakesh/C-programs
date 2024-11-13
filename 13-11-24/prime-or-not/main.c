/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) 
    {
        printf("%d is Not Prime\n", n);
    } 
    else 
    {
        for (i = 2; i < n; i++) 
        {
            if (n % i == 0) 
            {
                printf("%d is Not Prime\n", n);
                break;  
            }
        }
        if (i == n) 
        {
            printf("%d is Prime\n", n);
        }
    }

    return 0;
}
