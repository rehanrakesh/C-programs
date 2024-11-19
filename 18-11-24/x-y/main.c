/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int power(int x, int y) {

    if (y == 0) {
        return 1;
    }

    int result = 1;  

    for (int i = 1; i <= y; i++) {
        result *= x;  
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter the base (x): ");
    scanf("%d", &base);
    
    printf("Enter the exponent (y): ");
    scanf("%d", &exponent);

    printf("%d raised to the power of %d is %d\n", base, exponent, power(base, exponent));

    return 0;
}
