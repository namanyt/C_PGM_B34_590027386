/*
Question 23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Example:
Input: 4
Output: Fine ₹8
*/

#include <stdio.h>

int main() {
    int lateDays, fine = 0;

    // Input late days
    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    // Calculate fine
    if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4;
    } else if (lateDays <= 30) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
    } else {
        printf("Membership Cancelled\n");
        return 0;
    }

    // Display fine
    printf("Fine ₹%d\n", fine);

    return 0;
}