#include <stdio.h>

int main()
{
    printf("โจทย์ 1: Triangle\n");
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("โจทย์ 2: Square (n=4)\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("โจทย์ 3: Diamond (n=3)\n");
 for(i = 1; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i >= 1; i--) {
        for (j = 1; j <= 3 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
   
}
    