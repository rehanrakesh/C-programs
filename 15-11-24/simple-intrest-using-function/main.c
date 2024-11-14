/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float simpleInterest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest; 
}

int main()
{
    float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    float interest = simpleInterest(principal, rate, time); 
    printf("Simple interest is: %.2f\n", interest);

    return 0;
}
