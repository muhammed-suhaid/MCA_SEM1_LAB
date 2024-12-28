#include<stdio.h>
int adj[10][10];
int stack[20],top=-1;
int visited[20]={0};
void push(int item);
int pop();
void dfs(int s,int n);
int main()
{
    int s,i,j,n;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacancy matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    printf("Enter the staring vertex:");
    scanf("%d",&s);
    dfs(s,n);
}
void push(int item)
{
    if(top==19)
    {
        printf("Stack overflow");
    }
    else{
        stack[++top]=item;
    }
}
int pop()
{
    if(top==-1)
    {
        return 0;
    }
    else{
        return stack[top--];
    }
}
void dfs(int s,int n)
{
    int i,p;
    push(s);
    while((p = pop()) !=0)
    {
        if(visited[p]==0)
        {
            visited[p]=1;
            printf("%d\t",p);

            for(i=1;i<=n;i++)
            {
                if((adj[p][i]==1)&&(visited[i]==0))
                {
                    push(i);
                }
            }
        }
    }
}
