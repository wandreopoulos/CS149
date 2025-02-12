#include <stdio.h>
#include <string.h>

/* maximum size of an input line : adapt to your needs */
#define SIZE 256

int main() {

    int i, numberOfNumbs=0,total=0,value, valsRead;
    float average;
    char line[SIZE], *val;
    char delims[] = " \t\r\n";

    if (fgets(line, SIZE, stdin) == NULL) { /* EOF */
        fprintf(stderr, "No input\n");
        return 1;
    }

    val = strtok(line, delims);
    valsRead = sscanf(val, "%d",&value);

    while(numberOfNumbs < 5)
    {
        numberOfNumbs++;
        total +=value;
        printf("Read %d\n", value);
        val = strtok(NULL, delims);
        valsRead = sscanf(val, "%d",&value);
    }

    average=(float)total/(float)numberOfNumbs;
    printf("You read %d values. Average = %f.",numberOfNumbs, average);

    return (0);
}
