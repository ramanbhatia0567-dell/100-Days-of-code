#include <stdio.h>
int main() {
    float celsius;
    float fahrenheit;

    printf("Enter temoprature in Celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 9/5)+32;

    printf("%.2f Celsius in Fahrenheit is %.2f", celsius, fahrenheit);
}