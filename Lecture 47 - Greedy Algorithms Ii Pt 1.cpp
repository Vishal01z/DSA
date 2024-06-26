#include <iostream>
#include <vector>
#include <limits>
#include <queue>

using namespace std;

// Function to find the vertex with the minimum key value, from the set of vertices
// not yet included in MST
int minKey(const vector<int>& key, const vector<bool>& mstSet) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < key.size(); v++) {
        if (mstSet[v] == false && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

// A utility function to print the constructed MST stored in parent[]
void printMST(const vector<vector<int>>& graph, const vector<int>& parent) {
    cout << "Edge \tWeight\n";
    for (int i = 1; i < graph.size(); i++) {
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << endl;
    }
}

// Function to construct and print MST for a graph represented using adjacency matrix representation
void primMST(const vector<vector<int>>& graph) {
    int V = graph.size(); // Number of vertices in graph

    // Array to store constructed MST
    vector<int> parent(V); // Array to store constructed MST
    // Key values used to pick minimum edge in cut
    vector<int> key(V);    // Key values used to pick minimum edge in cut
    // Minimum Spanning Tree Set. false is not yet included in MST
    vector<bool> mstSet(V, false);

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
