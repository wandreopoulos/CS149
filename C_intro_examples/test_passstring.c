#include<stdio.h>
#include <stdlib.h>

//char * getString(char str[]) // *str) //it is not necessary to return anything!
//if you pass in dynamic malloc'ed memory the modifications to mem in the function 
//will persist after the func returns.
    //return (char *)str;

void getString(char *str) //char str[]) // char *str) 
// you can pass either a [] or a pointer * and it wil be treated like a pointer by C/C++
{
    str[0] = 'w';
}

int main()
{
    char s[] = "hello";
    //char * s = calloc(10, 1);  //malloc and calloc is how you declare dynamic memory
    //getString("Will I be printed?"); //this will not work because what you passing
    //      in is a string literal on the Data Segment, not dynamic memory on the heap
    getString(s);
    printf("%s", s);
    //getchar();
    return 0;
}


