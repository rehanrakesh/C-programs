/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, sum = 0;
    float avg;  

    printf("Enter a number: ");
    scanf("%d", &n); 

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    avg = (float)sum / n;  

    printf("The average of the first %d natural numbers is: %.2f\n", n, avg);

    return 0;
}

