#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    scanf("%s", str);

    while(str[count] != '\0') {
        count++;
    }

    for(i = count - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}