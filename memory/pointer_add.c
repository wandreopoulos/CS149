// C program to illustrate pointer Addition
#include <stdio.h>
 
// Driver Code
int main()
{
    // Integer variable
    int N = 4;
 
    // Pointer to an integer
    int *ptr1, *ptr2;
 
    // Pointer stores the address of N
    ptr1 = &N;
    ptr2 = &N;
 
    printf("Pointer ptr2 before Addition: ");
    printf("%p \n", ptr2);
 
    // Addition of 3 to ptr2
    ptr2 = ptr2 + 3;
    printf("Pointer ptr2 after Addition: ");
    printf("%p \n", ptr2);
 
    return 0;
}

