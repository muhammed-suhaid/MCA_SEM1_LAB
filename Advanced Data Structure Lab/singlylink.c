#include <stdio.h>
#include <stdlib.h>

// structure of the node
struct node
{
    int data;
    struct node *next;
} *head = NULL, *new, *temp, *end, *sEnd;

int count = 0;

// creation of a node
void create()
{
    int val;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to the node : ");
    scanf("%d", &val);
    new->data = val;
    new->next = NULL;
}

// insertion...
// insertion to beginning

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
        head = new;
    }
    count++;
}

// insertion to end

void ins_end()
{
    create();
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        // finding the last node
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        count++;
    }
}

// insertion to particular position
void ins_pos()
{
    int pos, i;
    printf("Enter the postion to which the node is to be inserted : ");
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
        new->next = temp->next;
        temp->next = new;
        count++;
    }
    else
    {
        printf("Something went wrong!");
    }
}

// deletion...
// deletion at beginning
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
        free(temp);
        count--;
    }
}

// deletion at end
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
        { // only one node in list
            head == NULL;
        }
        else
        {
            sEnd->next = NULL;
        }
        free(end);
        count--;
    }
}

// deletion at a particular position
void del_pos()
{
    int pos, i;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter the position to delete : ");
        scanf("%d", &pos);
        if (pos == 1)
        {
            del_beg();
        }
        else if (pos == count)
        {
            del_end();
        }
        else if (pos > 1 && pos < count)
        {
            end = sEnd = head;
            for (i = 0; i < pos - 1; i++)
            {
                sEnd = end;
                end = end->next;
            }
            sEnd->next = end->next;
            free(end);
            count--;
        }
    }
}

// display

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

// search
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

// main method

int main()
{
    int c;
    printf("--------------- LINKED LIST ---------------\n");
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