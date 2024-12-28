#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
} *root = NULL, *new, *p;

void create()
{
    int v;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", &v);
    new->data = v;
    new->lchild = NULL;
    new->rchild = NULL;
}

void search(struct node *rt)
{
    if ((new->data < rt->data) && (rt->lchild == NULL))
    {
        rt->lchild = new;
    }
    else if ((new->data > rt->data) && (rt->rchild == NULL))
    {
        rt->rchild = new;
    }
    else if ((new->data < rt->data) && (rt->lchild != NULL))
    {
        search(rt->lchild);
    }
    else if ((new->data > rt->data) && (rt->rchild != NULL))
    {
        search(rt->rchild);
    }
    else
    {
        printf("\nInvalid input");
    }
}

void insert()
{
    create();
    if (root == NULL)
    {
        root = new;
    }
    else
    {
        search(root);
    }
    printf("Inserted Successfulyy.....");
}

void preorder(struct node *rt)
{
    if (rt != NULL)
    {
        printf("%d ", rt->data);
        preorder(rt->lchild);
        preorder(rt->rchild);
    }
}

void inorder(struct node *rt)
{
    if (rt != NULL)
    {
        inorder(rt->lchild);
        printf("%d ", rt->data);
        inorder(rt->rchild);
    }
}

void postorder(struct node *rt)
{
    if (rt != NULL)
    {
        postorder(rt->lchild);
        postorder(rt->rchild);
        printf("%d ", rt->data);
    }
}

void deletenode(struct node *rt)
{
    struct node *temp;

    if (rt->lchild == NULL && rt->rchild == NULL)
    {
        if (p->lchild == rt)
            p->lchild = NULL;
        else
            p->rchild = NULL;
        printf("successfully deleted");
        free(rt);
    }
    else if (rt->lchild == NULL || rt->rchild == NULL)
    {
        if (rt->lchild != NULL)
            temp = rt->lchild;
        else
            temp = rt->rchild;

        if (p->lchild == rt)
            p->lchild = temp;
        else
            p->rchild = temp;
        printf("successfully deleted");
        free(rt);
    }
    else if (rt->lchild != NULL && rt->rchild != NULL)
    {
        struct node *succParent = rt;
        struct node *succ = rt->rchild;
        while (succ->lchild != NULL)
        {
            succParent = succ;
            succ = succ->lchild;
        }
        rt->data = succ->data;
        succParent->lchild = NULL;
        printf("Successfully deleted");
        free(succ);
    }
    else
    {
        printf("Invalid");
    }
}

void dsearch(struct node *rt, int dt)
{
    if (dt > rt->data)
    {
        p = rt;
        dsearch(rt->rchild, dt);
    }
    else if (dt < rt->data)
    {
        p = rt;
        dsearch(rt->lchild, dt);
    }
    else if (dt == rt->data)
    {
        deletenode(rt);
    }
    else
    {
        printf("..Element not found..");
    }
}

void delete()
{
    int del;
    printf("\nEnter the value of node to be deleted: ");
    scanf("%d", &del);
    dsearch(root, del);
}

int main()
{
    int ch;
    printf("Choose the operations below:");
    printf("\n1.Insert\n2.Preorder Display\n3.Postorder display\n4.Inorder display\n5.Delete\n6.Exit");
    while (1)
    {
        printf("\n\nEnter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            printf("Preorder :");
            preorder(root);
            break;
        case 3:
            printf("Postorder :");
            postorder(root);
            break;
        case 4:
            printf("Inorder :");
            inorder(root);
            break;
        case 5:
            delete ();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nInvalid input\n");
        }
    }
}
