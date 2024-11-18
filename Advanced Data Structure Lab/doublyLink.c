#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *new, *temp;

int count = 0;

void create()
{
    int val;
    printf("Enter the data to insert : ");
    scanf("%d", &val);
    new = (struct node *)malloc(sizeof(struct node));
    new->data = val;
    new->next = NULL;
    new->prev = NULL;
}

void display()
{
    if (head == NULL)
    {
        printf("Nothing to display\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d ->", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void ins_beg()
{
    create();
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head->prev = new;
        head = new;
    }
    count++;
    display();
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
        new->prev = temp;
        temp->next = new;
        count++;
        display();
    }
}

void ins_pos()
{
    int pos, i;
    printf("Enter the postion to insert : ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        ins_beg();
    }
    else if (pos == count + 1)
    {
        ins_end();
    }
    else if (pos > 1 && pos <= count)
    {
        create();
        temp = head;
        for (i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        new->prev = temp;
        new->next = temp->next;
        temp->next->prev = new;
        temp->next = new;
        count++;
        display();
    }
    else
    {
        printf("Invalid");
    }
}

void del_beg()
{
    if (head == NULL)
    {
        printf("List is empty");
    }
    else if (head->next == NULL)
    {
        temp = head;
        head = NULL;
        free(temp);
        count--;
        printf("deletion success\n");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        count--;
        printf("deletion success\n");
    }
    display();
}

void del_end()
{
    if (head == NULL)
    {
        printf("List is empty");
    }
    else if (head->next == NULL)
    {
        temp = head;
        head = NULL;
        free(temp);
        count--;
        printf("deletion success\n");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
        count--;
        printf("deletion success\n");
    }
    display();
}

void del_pos()
{
    int pos, i;
    printf("Enter the position to delete : ");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("List is empty");
    }
    else if (pos == 1)
    {
        del_beg();
    }
    else if (pos == count)
    {
        del_end();
    }
    else if (pos > 1 && pos < count)
    {
        temp = head;
        for (i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        count--;
        printf("deletion success\n");
    }
    else
    {
        printf("Invalid");
    }
    display();
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
    printf("--------------- DOUBLY LINKED LIST ---------------\n");
    printf("1.Insert to beginning\n2.Insert to end\n3.Insert to particular position\n4.Delete from beginning\n5.Delete from end\n6.Delete from particular position\n7.Search\n8.Display\n9.exit");
    do
    {
        printf("\n--------------------------------------------------");
        printf("\nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            ins_beg();
            break;
        case 2:
            ins_end();
            break;
        case 3:
            ins_pos();
            break;
        case 4:
            del_beg();
            break;
        case 5:
            del_end();
            break;
        case 6:
            del_pos();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            return 0;
        default:
            printf("Invalid choice!");
        }
    } while (c > 0);
    return 0;
}