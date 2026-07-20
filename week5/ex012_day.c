#include <stdio.h>

int main()
{
    int day = 8;
    printf("number of the day: ");
    scanf("%d", &day);

    if (day == 1) {
        printf("Monday (Weekday)\n");
    } else if (day == 2) {
        printf("Tuesday (Weekday)\n");
    } else if (day == 3) {
        printf("Wednesday (Weekday)\n");
    } else if (day == 4) {
        printf("Thursday (Weekday)\n");
    } else if (day == 5) {
        printf("Friday (Weekday)\n");
    } else if (day == 6) {
        printf("Saturday (Weekend!)\n");
    } else if (day == 7) {
        printf("Sunday (Weekend!)\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}