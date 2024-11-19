/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_range(int start, int end) {

    if (start > end) 
    {
        printf("Invalid range: start should be less than or equal to end.\n");
        return;
    }

    for (int i = start + 1 ; i < end; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");  
}

int main() 
    {
    int start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("Numbers in the range %d, %d:\n", start, end);
    print_range(start, end);

    return 0;
}

