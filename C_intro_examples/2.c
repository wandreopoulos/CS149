#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    char c1, c2;
    printf("Enter something: ");
    scanf("%d", &a); // line 1
    printf("Enter other something: ");
    scanf("%d", &b); // line 2

    printf("Enter a char: ");
    scanf("%c", &c1); // line 3
    printf("Enter another char: ");
    scanf("%c", &c2); // line 4

    printf("Done %d %d %c %c", a, b, c1, c2); // line 5

    //system("PAUSE");

    return 0;
}

