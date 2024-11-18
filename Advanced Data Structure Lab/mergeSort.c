#include <stdio.h>
int main()
{
    int i, j, k, n1, n2;
    printf("Enter the no. of elements in first array:\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the no. of elements in the second array:\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("\nEnter the elements in the first array\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements in the second array\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int merge[n1 + n2];
    i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merge[k] = arr1[i];
            i++;
        }
        else
        {
            merge[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        merge[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        merge[k] = arr2[j];
        j++;
        k++;
    }
    printf("\nMerged sorted array is:\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}
