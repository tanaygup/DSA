/* algo
1. topological sort dfs
2. transpose the graph(topo sort in stack)
3.do dfs on element starting from top
4. dont do dfs on visited elements
5. store the answers
*/

#include<unordered_map>
#include<list>
#include<stack>

void topoSort(int node,unordered_map<int,bool> &visited,stack<int> &s,unordered_map<int, list<int>> &adj){
    visited[node]=1;

    for(auto neighbour:adj[node]){
        if(!visited[neighbour]){
            topoSort(neighbour, visited, s, adj);
        }
        
    }
    s.push(node);
}
void revDFS(int node,unordered_map<int,bool> &visited,unordered_map<int, list<int>> &adj){
	visited[node]=true;
	for(auto nbr:adj[node]){
		if(!visited[nbr]){
			revDFS(nbr,visited, adj);
		}
	}
}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// adj
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++){
		int u = edges[i][0];
		int v = edges[i][1];

		adj[u].push_back(v);
	}

	// topo
	unordered_map<int,bool> visited;
    stack<int>s;

    for(int i=0;i<v;i++){
        if(!visited[i]){
            topoSort(i,visited,s,adj);
        }
    }

	// transpose graph
	unordered_map<int, list<int>> transpose;
	for(int i=0;i<v;i++){
		visited[i]=0;
		for(auto it: adj[i])   // i-->it
		// now for it-->i
		transpose[it].push_back(i);
	}

	// dfs call using above ordering of topo stack
    int count =0;
	while(!s.empty()){
		int top = s.top();
        s.pop();
		if(!visited[top]){
			count++;
			revDFS(top, visited,transpose);
		}
	}
 return count;
}