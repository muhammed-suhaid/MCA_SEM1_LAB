#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *new, *temp, *end, *sEnd;

int count = 0;

void create()
{
    int val;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to the node : ");
    scanf("%d", &val);
    new->data = val;
    new->next = NULL;
}

void ins_end()
{
    create();
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        count++;
    }
}

void del_end()
{
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        end = sEnd = head;
        while (end->next != NULL)
        {
            sEnd = end;
            end = end->next;
        }
        if (end == head)
        {
            head == NULL;
        }
        else
        {
            sEnd->next = NULL;
        }
        printf("%d deleted", end->data);
        free(end);
        count--;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("Nothing to display!\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d ->", temp->data);
            temp = temp->next;
        }
    }
}

void search()
{
    int n, count = 0, flag = 0;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter the value to search : ");
        scanf("%d", &n);
        temp = head;
        while (temp != NULL)
        {
            count++;
            if (temp->data == n)
            {
                printf("%d found at position %d\n", n, count);
                flag = 1;
            }
            temp = temp->next;
        }
        if (flag == 0)
        {
            printf("%d not found\n", n);
        }
    }
}

int main()
{
    int c;
    printf("--------------- LINKED LIST ---------------\n");
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Search\n5.exit");
    do
    {
        printf("\n--------------------------------------------------");
        printf("\nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            ins_end();
            break;
        case 2:
            del_end();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice!");
        }
    } while (c > 0);
    return 0;
}