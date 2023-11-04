#include <stdlib.h>
#define MAX 10
    int A[MAX][MAX];
    int visited[MAX];
    int n;
    int main()
    {
    printf("Enter the number of vertices:");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            scanf("%d", &A[i][k]);
        }
    }
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }

    int v;
    printf("Enter the starting vertex:");
    scanf("%d", &v);
    DFS(v);
    return 0;

}
void DFS(int i)
{
    printf("%d", i);
    visited[i]=1;
    for(int k=0;k<n;k++)
    {
        if(A[i][k]==1&& !visited[k])
        {
            DFS(k);
        }
    }
}
