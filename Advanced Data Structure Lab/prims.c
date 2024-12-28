#include<stdio.h>
#include<stdlib.h>
# define inf 999

int i,j,cost[10][10],n,visited[10]={0},a,b,min=0;
int edges=0,totcost=0;

void main()
{
    printf("Enter the no. of vertices:");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            cost[i][j]=inf;
            
        }
    }
    visited[1]=1;
    while(edges < n - 1)
    {
        min=inf;
        a=0;
        b=0;

        for(i=1;i<=n;i++)
        {
            if(visited[i]==1)
            {
                for(j=1;j<=n;j++)
                {
                    if((visited[j]==0)&&(cost[i][j]!=inf))
                    {
                        if(cost[i][j]<min)
                        {
                            min=cost[i][j];
                            a=i;
                            b=j;
                       
                        }
                    }
                }
            }
        }
        printf("%d-->%d, cost=%d\n",a,b,min);
        edges++;
        visited[b]=1;
        totcost=totcost+min;
    }
    printf("Total cost=%d",totcost);
}
