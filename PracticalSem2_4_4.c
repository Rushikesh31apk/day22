#include <stdio.h>
void dfs(int v,int n); 
int i,j,a[20][20];
int main() {
	
	
	
    int v,n;
    printf("Enter number of vertices:\n");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (1/0):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Edge from %d to %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nShow the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the starting vertex for DFS:\n");
    scanf("%d", &v);
    printf("\nThe DFS nodes: ");
    dfs(v,n);
   
    return 0;
}

void dfs(int v,int n) {
   static int visited[20]={0};
     visited[v] = 1;
     printf("V%d ", v);
    for (i = 1; i <= n; i++){
        if (a[v][i]==1 && visited[i]==0){
            dfs(i,n);
        }
    }
    
}
/*
Enter number of vertices:
3
Enter the adjacency matrix (1/0):
Edge from 1 to 1: 0
Edge from 1 to 2: 1
Edge from 1 to 3: 1
Edge from 2 to 1: 1
Edge from 2 to 2: 0
Edge from 2 to 3: 1
Edge from 3 to 1: 1
Edge from 3 to 2: 1
Edge from 3 to 3: 0

Show the adjacency matrix:
0 1 1 
1 0 1 
1 1 0 

Enter the starting vertex for DFS:
1

The DFS nodes: V1 V2 V3*/

