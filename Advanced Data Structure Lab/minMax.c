#include <stdio.h>
void main()
{
  int a[10], i, min, max, n;
  printf("Enter the Size of Array: ");
  scanf("%d", &n);
  printf("Enter the Array Elements: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  min = a[0];
  max = a[0];
  for (i = 0; i < n; i++)
  {
    if (a[i] < min)
    {

      min = a[i];
    }
    if (a[i] > max)
    {
      max = a[i];
    }
  }

  printf("Smallest Element in the array is: %d\n", min);
  printf("Largest Element in the array is: %d\n", max);
}
