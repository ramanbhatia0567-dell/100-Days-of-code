#include <stdio.h>

int main() {
    char str[100];
    int i, v = 0, c = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u')
            v++;
        else
            c++;
    }

    printf("Vowels=%d, Consonants=%d", v, c);

    return 0;
}