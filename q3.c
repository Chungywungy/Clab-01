#include <stdio.h>

int main(void) {
    int seconds;
    printf("Input a positive integer: ");
    scanf("%i", &seconds);

    int hours = seconds / 3600;
    int hours_removed = seconds % 3600;
    int minutes = hours_removed / 60;
    int seconds_left = hours_removed % 60;
    printf("%i seconds, is equivalent to: %i hours, %i minutes, and %i seconds", seconds, hours, minutes,
        seconds_left);

    return 0;
}
