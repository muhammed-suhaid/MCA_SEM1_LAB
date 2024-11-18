#include <stdio.h>

#define size 4
int queue[size];
int front = -1, rear = -1;

void enqueue()
{
    int n;
    if ((rear == size - 1 && front == 0) || rear == front - 1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the value to add : ");
        scanf("%d", &n);
        if (front == -1)
        {
            front++;
        }
        rear = (rear + 1) % size;
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
            front = (front + 1) % size;
        }
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("underflow");
    }
    else
    {
        printf("Elements in the Queue : ");
        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
        }
        else
        {
            for (i = front; i < size; i++)
            {
                printf("%d ", queue[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
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
        printf("\nEnter your choice :");
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
        case 5:
            printf("invalid choice");
        }
    } while (c > 0);
    return 0;
}
