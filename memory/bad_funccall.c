#include<stdio.h>
#include<stdlib.h>


void fun(int *a)
{
    a = (int*)malloc(sizeof(int));
    *a = 5;
    printf("in func %d\n",*a);
}


int main()
{
    int *p;
    fun(p);
    *p = 6;
    printf("after func %d\n",*p);
    return(0);
}
