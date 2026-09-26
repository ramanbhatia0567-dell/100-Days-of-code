#include <stdio.h>

int main() {
    int n;
    int a[100][100];
    int sum = 0;

    scanf("%d", &n);

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}