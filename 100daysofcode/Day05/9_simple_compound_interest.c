/*
Question 9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Example:
Input: 1000 5 2
Output: Simple Interest=100, Compound Interest=102.5
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    // Input principal, rate, and time
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}