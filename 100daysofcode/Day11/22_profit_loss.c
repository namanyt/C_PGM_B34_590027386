/*
Question 22: Write a program to find profit or loss percentage given cost price and selling price.

Example:
Input: 1000 1200
Output: Profit 20%
*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    // Input cost price and selling price
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    // Calculate profit or loss percentage
    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.2f%%\n", percentage);
    } else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.2f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}