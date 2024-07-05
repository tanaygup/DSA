#include <vector>
#include <iostream>
using namespace std;
/* ALGO
    Initialize an array dist of size V to store the shortest distances from the source to all vertices.
     Set dist[src] to 0 and all other elements to INT_MAX.
    Loop V-1 times (where V is the number of vertices).
        For each edge (u, v) with weight w in the graph:
            If dist[u] is not equal to INT_MAX and dist[u] + w is less than dist[v], update dist[v] to dist[u] + w.
    After the loop, dist array contains the shortest distances from the source to all vertices if there is no negative cycle reachable from the source.
    Check for negative cycles: Loop through all edges again and if there is any edge (u, v) with weight w such that dist[u] + w is less than dist[v], then the graph contains a negative cycle. Print a message and exit.
    If there is no negative cycle, print the shortest distances from the source to all vertices.
*/

vector<int> bellmanFord(int n, int m, int src, vector<vector<int>> &edges)
{
    vector<int> dist(n + 1, 1e9);
    dist[src] = 0;

    for (int i = 1; i <= n; i++)
    {
        // traversing the edges
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if (dist[u] != 1e9 && (dist[u] + wt < dist[v]))
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // checking for negative cycle
    bool flag = false;
    for (int j = 0; j < m; j++)
    {
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if (dist[u] != 1e9 && (dist[u] + wt < dist[v]))
        {
            dist[v] = dist[u] + wt;
            flag = true; // Detected negative cycle
        }
    }

    if (flag)
    {
        cout << "Negative cycle detected!" << endl;
    }
    else
    {
        cout << "Shortest distances from source " << src << " are:" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;
    }

    return dist;
}

int main()
{
    // Example usage:
    int n = 5, m = 8, src = 0;
    vector<vector<int>> edges = {{0, 1, 5}, {0, 2, -2}, {1, 2, 2}, {1, 3, 4}, {2, 3, 3}, {2, 4, 6}, {3, 4, -1}, {4, 1, -1}};

    vector<int> result = bellmanFord(n, m, src, edges);

    return 0;
}
