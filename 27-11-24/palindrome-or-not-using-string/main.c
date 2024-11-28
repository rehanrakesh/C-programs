/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int length, isPalindrome = 1;
    printf("Enter a word to be checked: ");
    fgets(str,sizeof(str),stdin);
    length= strlen(str) - 1;
    str[length] = '\0';
    for(int i = 0; i< length/2; i++)
    {
        if(str[i]!= str[length-1-i]){
            isPalindrome = 0;
            break;
        }
    }
     if(isPalindrome){
         printf("it is Palindrome\n");
     }else{
         printf("not Palindrome");
     }
    return 0;
}
