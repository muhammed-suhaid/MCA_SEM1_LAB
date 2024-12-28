#include<stdio.h>
int main()
{
    int v1,v2,n,i,j,a;
    int adj[10][10];
    printf("\nEnter the number of vertices:");
    scanf("%d",&n);
    printf("\nEnter the value for the vertices:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    printf("\nEnter the vertex for outgoing:");
    scanf("%d",&v1);
    printf("\nThe outgoing edges of the vertex %d are:",v1);
    for(j=1;j<=n;j++)
    {
        if(adj[v1][j]==1)
        {
            printf("\n%d-%d",v1,j);
        }
    }
    printf("\nEnter the vertex for incoming:");
    scanf("%d",&v2);
    printf("\nThe incoming edges of the vertex %d are:",v2);
    for(i=1;i<=n;i++)
    {
        if(adj[i][v2]==1)
        {
            printf("\n%d-%d",i,v2);
        }
    }

}
