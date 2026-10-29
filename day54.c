```c
#include <stdio.h>

int main()
{
    int n, x, leftSum, rightSum;
    int pivot = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = (x + n) * (n - x + 1) / 2;

        if(leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
```
