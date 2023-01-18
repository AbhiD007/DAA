# DAA

Given the Directed graph with Negative weights.

## Prims Algorithm 
Prims is a greedy algorithm that always chooses the closest vertex next in line with the least weight.
The algorithm however in a generic case will not work for directed graphs, but in this case implementing prim’s algorithm will result in a path that visits all nodes irrespective of the weights.

____________________________________________________________________________________________________________________


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

Prims's algorithm can be applied to a directed weighted graph with a modification.The graph needs to be converted into an undirected graph by replacing each directed edge with two edges - one in each direction,with the same weight.

_______________________________________________________________________________________________________________________________________________________________________

## Dijkstras Algorithm 
Dijkstras follows a couple of rules 
*There shouldnt be any negative edges .All Distances to source vertex are set to zero and all other distances to infinity.
*Choose closest vertex as next current vertex and continue until the end of the queue is reached.
### The Dijkstras Algorithm is very similar to the BELLMAN Ford algorithm 
Bellman Ford's algorithm and Dijkstra's algorithm are very similar in structure. While Dijkstra looks only to the immediate neighbors of a vertex, Bellman goes through each edge in every iteration.

For Dijkstras Algorithm to work, let us assume that instead of 
#include <stdio.h>
int main()
{
	int g[5][5]={{0,4,2,0,0},{0,0,3,2,3},{0,1,0,4,5},{0,0,0,0,0},{0,0,0,-5,0}};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(g[i][j]<0)
			{
				g[i][j]*4=g[i][j];		//Penalising Negative edges
			}
			else if(g[i][j]==0)
			{
				g[i][j]=100;			//Setting no edge values to 100 to stop interference
			}
		}
	}
	int order[5]={0},dist[5],visit[5]={0},min,node;
	for(int i=0;i<5;i++)		//Initialising distance array
	{
		dist[i]=g[0][i];
	}
	for(int c=0;c<5;c++)
	{
    	min=100;
		for(int i=0;i<5;i++)
		  	if(dist[i]<min && !visit[i]) 
		  	{
		    	min=dist[i];
		    	node=i;
		  	}
		visit[node] = 1;
		for(int i=0;i<5;i++)
		{
		  	if(!visit[i])
		  	{
		    	if(min+g[node][i]<dist[i])
		    	{
		      		dist[i]=min+g[node][i];
		    	}
		    }
  		}
  	}
  	for(int i=1;i<5;i++)
      	printf("Distance from 1 to %d is %d\n",i+1,dist[i]);
}
  
