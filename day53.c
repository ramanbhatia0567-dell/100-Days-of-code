```c
#include <stdio.h>

int main()
{
    int n, nums[100], total = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(leftSum == total - leftSum - nums[i])
        {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}
```
