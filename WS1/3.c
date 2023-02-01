#include <stdio.h>

int main(void)
{
    int age;
    char name[256];
    printf("Input your age:");
    scanf("%d", &age); /* Input 10 */
    printf("Input your full name [firstname lastname]");
    fgets(name, sizeof name, stdin); /* Doesn't read! */
    return 0;
}

