#include <stdio.h>

int A[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int B[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void unionn()
{
    int i;
    printf("\nUnion of A & B : ");
    for (i = 1; i < 10; i++)
    {
        printf("%d ", A[i] || B[i]);
    }
}
void inter()
{
    int i;
    printf("\nIntersection of A & B : ");
    for (i = 1; i < 10; i++)
    {
        printf("%d ", A[i] && B[i]);
    }
}

void compli()
{
    int i;
    printf("\nCompliment of A :");
    for (i = 1; i < 10; i++)
    {
        printf("%d ", !A[i]);
    }
    printf("\nCompliment of B :");
    for (i = 1; i < 10; i++)
    {
        printf("%d ", !B[i]);
    }
}

int main()
{
    int s1, s2, num, i, c;

    printf("Enter the size of the first array : ");
    scanf("%d", &s1);
    for (i = 1; i <= s1; i++)
    {
        scanf("%d", &num);
        A[num] = 1;
    }
    for (i = 1; i < 10; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nEnter the size of the second array : ");
    scanf("%d", &s2);
    for (i = 1; i <= s2; i++)
    {
        scanf("%d", &num);
        B[num] = 1;
    }
    for (i = 1; i < 10; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n--------------- MENU ---------------");
    printf("\n1.Union\n2.Intersection\n3.Compliment\n4.Exit\n");
    do
    {
        printf("\n----------");
        printf("\nEnter your Choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            unionn();
            break;
        case 2:
            inter();
            break;
        case 3:
            compli();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!");
        }
    } while (c > 0);

    return 0;
}