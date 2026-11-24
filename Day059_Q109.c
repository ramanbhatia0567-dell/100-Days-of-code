/* Day 59 - Q109 */
#include <stdio.h>

int main(void)
{
  int n;
  int k;
  int a[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  scanf("%d", &k);
  if ((k <= 0) || (k > n))
    return 0;
  long long sum = 0;
  for (int i = 0; i < k; i++)
    sum += a[i];

  long long max = sum;
  for (int i = k; i < n; i++)
  {
    sum += a[i] - a[i - k];
    if (sum > max)
      max = sum;
  }

  printf("%lld\n", max);
  return 0;
}


