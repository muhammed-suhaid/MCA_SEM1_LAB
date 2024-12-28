#include <stdio.h>
int adj[10][10];
int q[20], front = -1, rear = -1;
int visited[20] = {0};
void bfs(int s, int n);
int main()
{
    int s, i, j, n;
    printf("\n------BFS--------\n");
    printf("\nEnter the number of vertices:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("\nEnter the starting vertex:");
    scanf("%d", &s);
    bfs(s, n);
}
void insert(int item)
{
    if (rear == 19)
    {
        printf("Queue is full");
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        rear++;
        q[rear] = item;
    }
}
int delete()
{
    int k;
    if ((front > rear) || (front == -1))
    {
        return 0;
    }
    else
    {
        k = q[front];
        front++;
        return (k);
    }
}
void bfs(int s, int n)
{
    int i, p;
    insert(s);
    visited[s] = 1;
    p = delete ();
    if (p != 0)
    {
        printf("%d\t", p);
    }
    while (p != 0)
    {
        for (i = 1; i <= n; i++)
        {
            if ((adj[p][i] == 1) && (visited[i] == 0))
            {
                insert(i);
                visited[i] = 1;
            }
        }
        p = delete ();
        if (p != 0)
        {
            printf("%d\t", p);
        }
    }
}
