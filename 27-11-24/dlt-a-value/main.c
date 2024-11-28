/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n, d;
	printf("Enter the no of Elements: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the %d Elements: ",n);
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter the index value to be deleted : ");
	scanf("%d",&d);

	for(int i=0; i<n; i++) {
		if(i == d) {
			continue;
		}
		else{
		    printf("%d ",arr[i]);
		}
	}

	return 0;
}
