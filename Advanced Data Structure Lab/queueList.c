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

void del_beg()
{
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        head = head->next;
        printf("%d deleted", temp->data);
        free(temp);
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
            printf("%d <-", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int c;
    printf("--------------- QUEUE USING SINGLY LINKED LIST ---------------\n");
    printf("1.Insertion\n2.Deletion\n3.Display\n4.exit");
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
            del_beg();
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