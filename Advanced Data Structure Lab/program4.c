// Write a program to merge two arrays?
#include <stdio.h>

int main()
{
    int i,j,k, n, m, a[10], b[10], c[15];

    // Input the size of the array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);

    // Input elements for the array
    printf("Enter %d elements for the first array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input the size of the array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);

    // Input elements for the array
    printf("Enter %d elements for the second array: ", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // Loop through the first array to copy elements of first array to result array
    // for (i = 0; i < n; i++)
    // {
    //     c[i] = a[i];
    // }

    // // Loop through the second array to copy elements of second array to result array in the n+i position
    // for (i = 0; i < m; i++)
    // {
    //     c[n + i] = b[i];
    // }
    i=j=k=0;
    while(k<n+m){
        if(a[i]<b[j]&&i<n){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            if(a[i]>b[j]&&j<m){
                c[k]=b[j];
                j++;
                k++;
            }
        }
    }

    // Output the merged array
    printf("Merged array = \n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}