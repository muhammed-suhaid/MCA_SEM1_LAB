#include <stdio.h>
void main()
{
    int a[10], i, max, slarge, min, smin, n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("Enter the Array Elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = slarge = a[0];
    min = a[0];
    smin = a[1];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            slarge = max;
            max = a[i];
        }
        else if (a[i] > slarge && a[i] < max)
        {
            slarge = a[i];
        }
        if (a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        else if (a[i] < smin && a[i] > min)
        {
            smin = a[i];
        }
    }
    printf("Second Largest Element in the array is : %d\n", slarge);
    printf("Second Smallest Element in the array is : %d\n", smin);
}
