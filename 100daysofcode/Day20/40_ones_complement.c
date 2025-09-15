/*
Question 40: Write a program to find the 1’s complement of a binary number and print it.

Example:
Input: 1010
Output: 0101
*/

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate 1's complement
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }

    printf("1's complement = %s\n", binary);

    return 0;
}