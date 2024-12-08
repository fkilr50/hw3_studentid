/*
Marvel Aiken
1123543
08/12/2024
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS
vector<int> bfsTraversal(int start, vector<vector<int>>& adj, int V) {
    vector<bool> visited(V, false); // Track visited nodes
    vector<int> result; // Store BFS traversal order
    queue<int> q;

    // Start BFS from the starting vertex
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        result.push_back(current);

        // Traverse all neighbors of the current node
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return result;
}

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> adj(V);

    cout << "Enter adjacency list for each vertex (end each list with -1):" << endl;
    for (int i = 0; i < V; ++i) {
        cout << "Neighbors of vertex " << i << ": ";
        int neighbor;
        while (cin >> neighbor && neighbor != -1) {
            adj[i].push_back(neighbor);
        }
    }

    // Perform BFS starting from vertex 0
    vector<int> result = bfsTraversal(0, adj, V);

    // Output the BFS traversal
    cout << "BFS Traversal starting from vertex 0: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
