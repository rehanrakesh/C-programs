/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char title[100], author[100]; 

    printf("Enter the title of the book: ");
    fgets(title, sizeof(title), stdin); 
    title[strcspn(title, "\n")] = '\0';  

    printf("Enter the author's name: ");
    fgets(author, sizeof(author), stdin); 
    author[strcspn(author, "\n")] = '\0';  

    int title_length = strlen(title);
    int author_length = strlen(author);

    printf("The length of the book title is: %d characters\n", title_length);
    printf("The length of the author's name is: %d characters\n", author_length);

    return 0;
}

