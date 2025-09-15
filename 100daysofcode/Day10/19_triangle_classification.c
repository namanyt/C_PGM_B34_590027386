/*
Question 19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Example:
Input: 3 3 3
Output: Equilateral
*/

#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input side lengths
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Classify triangle
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}