// Write a program to merge two arrays?
#include <stdio.h>

int main()
{
    int i, j, k, n, m, a[10], b[10], c[15];

    // Input the size of the array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);

    // Input elements for the array
    printf("Enter %d elements for the first array: ", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input the size of the array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);

    // Input elements for the array
    printf("Enter %d elements for the second array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    // printing the first array
    printf("\n first array : ");
    for (i = 0; i < m; i++)
    {
        printf("%d  ", a[i]);
    }

    // printing the second array
    printf("\nSecond array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", b[i]);
    }

    i = j = k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // Output the merged array
    printf("Merged array = \n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}