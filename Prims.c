#include<stdio.h>
int a, b, u, v, n, i, j, ne = 1;
int visited[10] = {0}, min, mincost = 0, cost[10][10];

void main() {
  printf("Prim's Algorithm");                            //Adjacency matrix
  printf("\nEnter the number of nodes:");                //04200
  scanf("%d", & n);                                      //00323
  printf("\nEnter the adjacency matrix:\n");             //01145
  for (i = 1; i <= n; i++) {                             //000000
                                                         //000-50
    for (j = 1; j <= n; j++) {
      scanf("%d", & cost[i][j]);
      if (cost[i][j] == 0)
        cost[i][j] = 999;
    }
  }
  visited[1] = 1;                                       //Edge 1:(1 3),cost=2
  printf("\n");                                         //Edge 2:(3 2),cost=1
  while (ne < n) {                                      //Edge 3:(2 4),cost=2
    for (i = 1, min = 999; i <= n; i++) {               //Edge 4:(2 5),cost=3
      for (j = 1; j <= n; j++) {
        if (cost[i][j] < min) {
          if (visited[i] != 0) {
            min = cost[i][j];
            a = u = i;
            b = v = j;
          }
        }
      }
    }
    if (visited[u] == 0 || visited[v] == 0) {
      printf("\nEdge %d:(%d %d), Cost = %d", ne++, a, b, min);
      mincost += min;
      visited[b] = 1;
    }
    cost[a][b] = cost[b][a] = 999;
  }
  printf("\n\nMinimum cost=%d", mincost);              //Minimum Cost=8
}
