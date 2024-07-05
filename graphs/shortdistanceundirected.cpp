#include <unordered_map>
#include <list>
#include <map>
#include <queue>
#include <vector>
using namespace std;

vector<int> shortestPath(vector<pair<int,int>> edges, int n, int m, int s, int t) {
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent; // Changed to store int as parent instead of bool
    queue<int> q;
    q.push(s); // Add the starting node 's' to the queue
    visited[s] = true; // Mark the starting node as visited
    parent[s] = -1; // Assuming -1 denotes no parent for the starting node

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto i : adj[front]) {
            if (!visited[i]) {
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }
        }
    }

    // If the final node 't' was not visited, return an empty vector indicating no path
    if (!visited[t]) {
        return vector<int>();
    }

    vector<int> ans;
    int finalNode = t;
    ans.push_back(t);

    while (finalNode != s) {
        finalNode = parent[finalNode];
        ans.push_back(finalNode);
    }

    reverse(ans.begin(), ans.end()); // Reverse the path to get correct order
    return ans;
}
