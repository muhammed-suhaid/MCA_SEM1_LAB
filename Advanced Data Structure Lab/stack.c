#include <stdio.h>
int stack[10];
int top = -1;

void push()
{
    int n;

    if (top == 10 - 1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the value to push : ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
        printf("%d pushed", n);
    }
}

void pop()
{
    int temp;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        temp = stack[top];
        top--;
        printf("%d popped", temp);
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Elements in the stack :");
        for (i = top; i >= 0; i--)
        {
            printf("%d  ", stack[i]);
        }
    }
}

int main()
{
    int c;

    printf("----- Stack operation -----");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    printf("----------");
    do
    {
        printf("\nEnter your choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!");
        }
    } while (c > 0);

    return 0;
}