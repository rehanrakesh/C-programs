/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float circleArea(int r) {
    float radius = 3.14 * r * r; 
    return radius;
}

int main() {
    int r;
    printf("Enter the value of radius: ");
    scanf("%d", &r); 

    float area = circleArea(r); 
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
