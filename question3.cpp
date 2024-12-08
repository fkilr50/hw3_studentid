/*
Marvel Aiken
1123543
08/12/2024
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to perform DFS
void dfsTraversal(int node, vector<bool>& visited, vector<int>& result, vector<vector<int>>& adj) {
    stack<int> s;
    s.push(node);

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (!visited[current]) {
            visited[current] = true;
            result.push_back(current);

            // Push neighbors onto the stack in reverse order
            for (int i = adj[current].size() - 1; i >= 0; --i) {
                if (!visited[adj[current][i]]) {
                    s.push(adj[current][i]);
                }
            }
        }
    }
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

    vector<bool> visited(V, false); // Track visited nodes
    vector<int> result; // Store DFS traversal order

    dfsTraversal(0, visited, result, adj);

    // Output the DFS traversal
    cout << "DFS Traversal starting from vertex 0: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
