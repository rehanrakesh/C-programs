/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int absNum(int n){
    if(n==0){
        printf("Zero either positive nor negative");
        exit(0);
    }
    else if(n<0){
        return -n;
    }
    else{
        return n;
    }
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Absolute value of %d is %d",n,absNum(n));
    return 0;
}
