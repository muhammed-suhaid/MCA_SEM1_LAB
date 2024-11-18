#include <stdio.h>
void main()
{
    int a[10], b[10], c[20], i, m, n, f, d;
    printf("Enter the first Array Size:");
    scanf("%d", &m);
    printf("Enter the Elements of First Array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the second Array Size:");
    scanf("%d", &n);
    printf("Enter the Elements of Second Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\nFirst Array :");
    for (i = 0; i < m; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nSecond Array :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", b[i]);
    }
    f = m + n;
    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < f; i++)
    {
        c[m + i] = b[i];
    }
    printf("\nAfter Merge Third Array :");
    for (i = 0; i < f; i++)
    {
        printf(" %d", c[i]);
    }
}
