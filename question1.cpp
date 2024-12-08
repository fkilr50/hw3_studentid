/*
Marvel Aiken
1123543
xx/12/2024
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to create and return the adjacency list
vector<vector<int>> createAdjList(int V, int E) {
    // Initialization of empty adjacency list
    vector<vector<int>> adjList(V);

    cout << "Enter U and V:" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;

        // Add the edge to the adjacency list
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    return adjList;
}

// Function to display the adjacency list
void printAdjList(const vector <vector <int>>& adjList) {
    for (int i = 0; i < adjList.size(); i++) {
        cout << i << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

int main() {
    int V, E;
    cout << "Enter number of Vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> adjList = createAdjList(V, E);

    cout << "Adjacency List:" << endl;
    printAdjList(adjList);

    return 0;
}
