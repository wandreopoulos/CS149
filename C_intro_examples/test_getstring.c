#include<stdio.h>
char * getString()
{
    char str[] = "Will I be printed?";   
    return str;
}
int main()
{
    printf("%s", getString());
    getchar();
}


