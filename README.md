# Data Structure HW2
# Marvel Aiken 1123543

## Question 1
<br>
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
  
### Input:
V = 5, E = 7
edges = [[0,1], [0,4], [4,1], [4,3], [1,3], [1,2], [3,2]]

![image](https://github.com/user-attachments/assets/e817f811-9f7e-4b4e-a121-ae7239bc8a05)

### Output:
[[1,4], [0,2,3,4], [1,3], [1,2,4], [0,1,3]]

### Explanation:
- Node 0 is connected to 1 and 4.
- Node 1 is connected to 0,2,3 and 4.
- Node 2 is connected to 1 and 3.
- Node 3 is connected to 1,2 and 4.
- Node 4 is connected to 0,1 and 3.

---
### Input:
Enter number of Vertices: 5
  Enter number of edges: 6
  Enter U and V:
  0 1
  0 2
  1 2
  1 3
  2 3
  3 4

### Output:
Adjacency List:
  0: 1 2
  1: 0 2 3
  2: 0 1 3
  3: 1 2 4
  4: 3

---
## Question 2
<br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.

### Input: 
adj = [[2,3,1], [0], [0,4], [0], [2]]

![image](https://github.com/user-attachments/assets/dd252563-24f7-4c88-b42e-718f774cfe03)

### Output: [0, 2, 3, 1, 4]

### Explanation:
Starting from 0, the BFS traversal will follow these steps:
Visit 0 → Output: 0
Visit 2 (first neighbor of 0) → Output: 0, 2
Visit 3 (next neighbor of 0) → Output: 0, 2, 3
Visit 1 (next neighbor of 0) → Output: 0, 2, 3,
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4

---
### Input:
Enter the number of vertices: 5
Enter adjacency list for each vertex (end each list with -1):
Neighbors of vertex 0: 1 2 -1
Neighbors of vertex 1: 0 2 3 -1
Neighbors of vertex 2: 0 1 3 -1
Neighbors of vertex 3: 1 2 4 -1
Neighbors of vertex 4: 3 -1

### Output:
BFS Traversal starting from vertex 0: 0 1 2 3 4 

---

## Question 3
<br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.

### Input:
Input: adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]

![image](https://github.com/user-attachments/assets/3dc221e1-9776-431e-a309-c2ad75d01943)

### Output: [0, 1, 2, 3, 4]

###Explanation:
Starting from 0, the DFS traversal proceeds as follows:
Visit 0 → Output: 0
Visit 1 (the first neighbor of 0) → Output: 0, 1
Visit 2 (the first neighbor of 1) → Output: 0, 1, 2
Visit 3 (the first neighbor of 2) → Output: 0, 1, 2, 3
Backtrack to 2 and visit 4 → Final Output: 0, 1, 2, 3, 4

---
### Input:
Neighbors of vertex 0: 1 2 -1
Neighbors of vertex 1: 0 3 -1
Neighbors of vertex 2: 0 3 4 -1
Neighbors of vertex 3: 1 2 -1
Neighbors of vertex 4: 2 -1

### Output:
DFS Traversal starting from vertex 0: 0 1 3 2 4 

---

## Question 4
<br>
Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector containing vector of integers. Each vector represents an edge, with the first integer denotingthe endpoint of the edge and the second integer denoting the weight of the edge.

### Input:
V = 3, E = 3
0 1 5
1 2 3
0 2 1

![image](https://github.com/user-attachments/assets/8eba3a4a-4476-4fc9-80c9-78356ddeaff0)

### Output:
4

### Explanation:

![image](https://github.com/user-attachments/assets/7536f7bc-7cdd-4eed-9733-c91cc10943c4)

The Spanning Tree resulting in a weight of 4 is shown above.

---
### Input:
Enter the number of vertices (V): 4
Enter the number of edges (E): 5
Enter the edges (u v w):
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4 

### Output:
The sum of weights in the Minimum Spanning Tree (MST) is: 19
