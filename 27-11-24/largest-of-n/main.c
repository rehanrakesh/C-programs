/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	int n, i;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter %d elements:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int largest = arr[0];

	for(i = 1; i < n; i++) {
		if(arr[i] > largest) {
			largest = arr[i];
		}
	}

	printf("The largest element is: %d\n", largest);

	return 0;
}

