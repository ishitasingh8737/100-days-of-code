#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Taking input
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;             // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;    // remaining minutes
    seconds = totalSeconds % 60;             // remaining seconds

    // Output
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
