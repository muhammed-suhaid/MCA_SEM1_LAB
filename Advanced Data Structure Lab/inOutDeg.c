#include<stdio.h>

void main() {
    int a[10][10];
    int n, i, j, v, indegree = 0, outdegree = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the vertex to calculate indegree and outdegree: ");
    scanf("%d", &v);

    if (v < 0 || v > n) {
        printf("Invalid vertex!\n");
        return;
    }
    for (i = 1; i <= n; i++) {
        if (a[i][v] == 1) {
            indegree++;
        }
    }

    for (j = 1; j <= n; j++) {
        if (a[v][j] == 1) {
            outdegree++;
        }
    }

    printf("Vertex %d:\n", v);
    printf("Indegree: %d\n", indegree);
    printf("Outdegree: %d\n", outdegree);
}
