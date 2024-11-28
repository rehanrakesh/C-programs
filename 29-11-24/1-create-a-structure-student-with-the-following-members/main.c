/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct person {
    char Name[30];
    int Roll_no;
    char course;
};

int main() {
    int n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);

    struct person p[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details of person %d:\n", i + 1);

        printf("Enter the Name: ");
        scanf("%s", p[i].Name);

        printf("Enter the Roll_no: ");
        scanf("%d", &p[i].Roll_no);

        // Clear the buffer
        // while ((getchar()) != '\n');

        printf("Enter the course: ");
        scanf("%c", &p[i].course);
    }

    printf("\n\n__Details of all persons__\n");

    for (int i = 0; i < n; i++) {
        printf("\n\t\tName: %s\n\t\tRoll_no: %d\n\t\tCourse: %c\n", p[i].Name, p[i].Roll_no, p[i].course);
    }

    return 0;
}
