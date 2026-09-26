#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1, count = 0;

    scanf("%s", str);

    while(str[count] != '\0') {
        count++;
    }

    for(i = 0, j = count - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}