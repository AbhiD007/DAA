# DAA

Given the Directed graph with Negative weights.

## Prims Algorithm 
Prims is a greedy algorithm that always chooses the closest vertex next in line with the least weight.
The algorithm however in a generic case will not work for directed graphs, but in this case implementing prim’s algorithm will result in a path that visits all nodes irrespective of the weights.

Prims's algorithm can be applied to a directed weighted graph with a modification.The graph needs to be converted into an undirected graph by replacing each directed edge with two edges - one in each direction,with the same weight.



## Dijkstras Algorithm 
Dijkstras follows a couple of rules 
*There shouldnt be any negative edges .All Distances to source vertex are set to zero and all other distances to infinity.
*Choose closest vertex as next current vertex and continue until the end of the queue is reached.
### The Dijkstras Algorithm is very similar to the BELLMAN Ford algorithm 
Bellman Ford's algorithm and Dijkstra's algorithm are very similar in structure. While Dijkstra looks only to the immediate neighbors of a vertex, Bellman goes through each edge in every iteration.

For Dijkstras Algorithm to work, let us assume that instead of not allowing negative edges we penalise if that edge is travelled. 


## Kruskals Algorithm
Given a weighted undirected graph. We want to find a subtree of this graph which connects all vertices (i.e. it is a spanning tree) and has the least weight (i.e. the sum of weights of all the edges is minimum) of all possible spanning trees.
Kruskal's algorithm initially places all the nodes of the original graph isolated from each other, to form a forest of single node trees, and then gradually merges these trees, combining at each iteration any two of all the trees with some edge of the original graph. Before the execution of the algorithm, all edges are sorted by weight (in non-decreasing order). 
Sort all edges in increasing order of their edge weights.

 *Pick the smallest edge.
 *Check if the new edge creates a cycle or loop in a spanning tree.
 *If it doesn’t form the cycle, then include that edge in MST. Otherwise, discard it.
 *Repeat from step 2 until it includes |V| - 1 edges in MST.
 
 
 
### THIS WILL NOT WORK : AS THIS ALGORITHM LOOKS FOR THE LEAST WEIGHT, AND SINCE THE WEIGHT OF ONE OF THE EDGES IS NEGATIVE, WHEN COMPARING TO THE NEXT LEAST VALUED NUMBER WILL YIELD A ZERO GRAPH/SPANNING TREE




### FINAL CONCLUSION
ALL three greedy algorithms under different set of rules can be used to find the minimum spanning tree, but all of them fail without the proper assumptions.
Thus we employ the bellman forsd algorithm as it is tailored for negatively weighted directed graphs.
The C Language was used as it is the most familiar and it is very efficient.
