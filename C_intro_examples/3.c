#include <stdio.h>

int main(void)
{
    int age;
    char c;
    char name[5];
    printf("Input your age and a char:");
    scanf("%d %c", &age, &c); /* Input 10 */
    printf("Input your full name [firstname lastname]");
    fgets(name, sizeof name, stdin); /* Doesn't read! */
    printf("%s", name);
    return 0;
}

