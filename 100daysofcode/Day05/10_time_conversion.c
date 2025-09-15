/*
Question 10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Example:
Input: 3661
Output: 1:1:1
*/

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, and seconds
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Display result
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}