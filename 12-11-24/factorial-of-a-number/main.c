/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,f=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        f=f*i;
        // printf("factorial is %d\n",f=f*i);
        
    }
    printf("\n factorial of %d is %d",n,f);
    return 0;
}
