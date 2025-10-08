#include<stdio.h>
char * getString()
{
    char str[] = "Will I be printed?";   
    char *str2 = "Will I be printedddd?";
    return str;
}
int main()
{
    printf("%s", getString());
    getchar();
}


