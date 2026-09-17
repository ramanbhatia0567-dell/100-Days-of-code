#include <stdio.h>
int main(){
    float radius;
    float area;
    float circumfrence;
    float pi = 3.14;

    printf("Enter Radius: ");
    scanf("%f",&radius);

    area = pi*radius*radius;
    circumfrence = 2*pi*radius;

    printf("Area = %.2f, Circumfrence = %.2f",area,circumfrence);

}