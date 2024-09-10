// Write a program to find the largest and smallest element in an array?
#include <stdio.h>
int main()
{
    int a[20], i, n, min, max;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements for the array
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Initialize first element of the array to the max and min
    max = min = a[0];

    // Loop through the array to find the largest and smallest elements
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    // Output the largest and smallest values
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}