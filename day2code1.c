
#include <stdio.h>
int main(){
    int length;
    int breadth;
    int area;
    int perimeter;

    printf("Enter Lenght: ");
    scanf("%d",&length);
    printf("Enter Breadth: ");
    scanf("%d",&breadth);

    area = length * breadth;
    perimeter = 2*(length+breadth);

    printf("Area=%d, Perimeter=%d",area , perimeter);
    return 0;
}