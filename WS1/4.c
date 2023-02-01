#include <stdio.h>

int main(void)
{
    int i;

    while(1) {
        if (scanf("%d", &i) != 1) { /* Input "abc" */
            printf("Invalid input. Try again\n");
        } else {
            break;
        }
    }

    printf("Int read: %d\n", i);
    return 0;
}

