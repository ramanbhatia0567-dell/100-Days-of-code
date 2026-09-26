#include <stdio.h>

int main() {
    int n;
    int a[100][100];
    int symmetric = 1;

    scanf("%d", &n);

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}