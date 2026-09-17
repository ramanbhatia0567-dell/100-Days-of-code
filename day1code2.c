#include <stdio.h>
int main(){
    int num1;
    int num2;
    int sum;
    int diff;
    int product;
    int quotient;

    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);
    return 0;
}