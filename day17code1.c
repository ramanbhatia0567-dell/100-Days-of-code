#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    while (n != 0) {
        digits++;
        n = n / 10;
    }

    n = original;

    // Calculate sum of digits raised to power 'digits'
    while (n != 0) {
        remainder = n % 10;
        sum = sum + pow(remainder, digits);
        n = n / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number", original);
    }
    else {
        printf("%d is not an Armstrong number", original);
    }

    return 0;
}