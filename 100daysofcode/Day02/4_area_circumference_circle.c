/*
Question 4: Write a program to calculate the area and circumference of a circle given its radius.

Example:
Input: 7
Output: Area=153.94, Circumference=43.96
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}