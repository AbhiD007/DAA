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
