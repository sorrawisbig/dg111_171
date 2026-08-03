#include <stdio.h>

int main()
{
    int rows = 3;
    int cols = 5;
    int count = 1;
printf("+---+---+---+---+---+\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("|%2d ", count);
            count++;
        }
            printf("|%2d", count ++);
            printf("|\n");

        printf("\n");
    }
    printf("+---+---+---+---+---+\n");
    return 0;
}