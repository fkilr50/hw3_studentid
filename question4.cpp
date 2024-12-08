/*
Marvel Aiken
1123543
08/12/2024
*/

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int findMST(int V, vector<vector<pair<int, int>>>& adj) {
    vector<bool> visited(V, false); // Track visited nodes
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; // Min-heap
    int mstWeight = 0; // Sum of weights in the MST

    // Start with node 0
    pq.push({0, 0}); // {weight, node}

    while (!pq.empty()) {
        pair<int, int> top = pq.top(); // Get the pair (weight, node)
        pq.pop();

        int weight = top.first; // Extract weight
        int node = top.second; // Extract node

        // Skip already visited nodes
        if (visited[node]) continue;

        // Mark the node as visited and add the weight to the MST
        visited[node] = true;
        mstWeight += weight;

        // Push all unvisited neighbors into the priority queue
        for (auto& neighbor : adj[node]) {
            int neighborNode = neighbor.first;
            int edgeWeight = neighbor.second;

            if (!visited[neighborNode]) {
                pq.push({edgeWeight, neighborNode});
            }
        }
    }

    return mstWeight;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices (V): ";
    cin >> V;

    cout << "Enter the number of edges (E): ";
    cin >> E;

    // Adjacency list where each node has a list of {neighbor, weight}
    vector<vector<pair<int, int>>> adj(V);

    cout << "Enter the edges (u v w):" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // Since the graph is undirected
    }

    // Find the MST weight
    int mstWeight = findMST(V, adj);

    // Output the result
    cout << "The sum of weights in the Minimum Spanning Tree (MST) is: " << mstWeight << endl;

    return 0;
}
