/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int reverseArray(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements of the array: ",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    reverseArray(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
    }
    

    return 0;
}
