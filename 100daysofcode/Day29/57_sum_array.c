/*
Question 57: Find the sum of array elements.

Example:
Input: 4
2 4 6 8
Output: 20
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Print sum of elements
    printf("Sum of elements: %d\n", sum);

    return 0;
}