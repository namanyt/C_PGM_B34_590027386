/*
Question 58: Find the maximum and minimum element in an array.

Example:
Input: 5
2 9 1 4 7
Output: Max=9, Min=1
*/

#include <stdio.h>

int main() {
    int n, max, min;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}