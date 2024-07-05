// total degree of a graph = 2* no. of edges

#include<iostream>
#include<vector>
using namespace std;
int main() {

    // adjacency matrix 
    int n;
    int m;
    cin>>n>>m;
    int adj[n+1][n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
         adj[u][v]=1;
         adj[v][u]=1;

    }
    // complexity = n^2

    // adjacency list
     int n;
    int m;
    cin>>n>>m;
    vector<int> list[n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;

       list[u].push_back(v);
       list[v].push_back(u);
    }
    // space complexity = 2E for undirected  for directed =E

  /*    int numProvinces(vector<vector<int>> adj, int V) {
        
        // changing matrix to list
        vector<int> adjLs[V];
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }*/

    

    
return 0;
}
