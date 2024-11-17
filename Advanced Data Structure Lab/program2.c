// Write a program to find the second largest and second smallest element in an array?
#include <stdio.h>
int main()
{
    int a[20], i, n, min, smin, max, smax;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements for the array
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Initialize first element of the array to the max, smax, min and smin
    max = a[0];
    min = a[0];
    smax = a[1];
    smin = a[1];

    // Loop through the array to find the second largest and second smallest elements
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if (a[i] > smax && a[i] < max)
        {
            smax = a[i];
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

    // Output the largest and smallest values
    printf("Second largest element: %d\n", smax);
    printf("Second smallest element: %d\n", smin);

    return 0;
}