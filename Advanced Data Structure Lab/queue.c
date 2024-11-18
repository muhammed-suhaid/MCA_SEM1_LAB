#include <stdio.h>
int queue[10];
int front = -1, rear = -1;

void enqueue()
{
    int n;
    if (rear == 10 - 1)
    {
        printf("overflow");
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        rear++;
        printf("Enter the value : ");
        scanf("%d", &n);
        queue[rear] = n;
        printf("%d added", n);
    }
}

void dequeue()
{

    if (front == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d removed", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Elements in the Queue : ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int c;
    printf("----- Queue Operation -----");
    printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
    printf("----------");
    do
    {
        printf("\nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice");
        }

    } while (c > 0);

    return 0;
}