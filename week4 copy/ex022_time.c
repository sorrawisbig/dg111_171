#include <stdio.h>
int main()
{

    int secs = 0;
    printf("input: ");
    scanf("%d", &secs);
    int hours = secs / 3600;
    int minutes = (secs % 3600) / 60;
    int seconds = secs % 60;
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}