#include <stdio.h>

int main(void)
{
    int i, i2, i3;

    while(1) {
        if (scanf("%d %d %d", &i, &i2, &i3) != 3) { /* Input "abc" */
            printf("Invalid input. Try again\n");
        } else {
            break;
        }
    }

    printf("Int read: %d\n", i);
    printf("Int read: %d\n", i2);
    printf("Int read: %d\n", i3);
    return 0;
}

