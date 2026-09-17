#include <stdio.h>
int main() {
    int num1;
    int num2;
    int sum;

    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}