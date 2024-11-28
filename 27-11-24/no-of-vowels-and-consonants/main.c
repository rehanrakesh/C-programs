/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h> 

int main(){
    char str[50];
    int v=0, c=0;
    printf("Enter words to be checked: ");
    fgets(str,sizeof(str),stdin);
    
    for(int i = 0;str[i] != '\0';i++){
        char ch = tolower(str[i]);
        
        if(ch>= 'a' && ch<= 'z'){
            if(ch=='a'|| ch == 'e'|| ch =='i'|| ch =='o'|| ch =='u'){
                v++;
            }else{
                c++;
            }
        }
    }
    printf("No of vowels: %d\n",v);
    printf("No of consonants: %d",c);
    return 0;
}