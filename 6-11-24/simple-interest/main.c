/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float P, R, T;
    printf("Enter value of Principal :");
    scanf("%f",&P);
    printf("Enter value of Rate Of Interest :");
    scanf("%f",&R);
    printf("Enter value of Time in year :");
    scanf("%f",&T);
    printf("Simple Interest is %f", (P * R * T)/100);

    return 0;
}
