/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int isPalindrome(int num) {
    int original = num; 
    int reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;         
        reversed = reversed * 10 + digit; 
        num /= 10;                     
    }
    
    if (original == reversed) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int n;
    printf("Enter an number: ");
    scanf("%d", &n);
    
    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    
    return 0;
}
