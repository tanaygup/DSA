#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <queue>
int main(){
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int, list<int>> adj;
    for(int i=0;i<=e;i++){
        int u= edges[i][0];
        int v= edges[i][1];

        adj[u].push_back(v);
    }

    vector<int> indegree(v);
    queue<int>q;

    for(auto it:adj){
        for(auto j:it.second){
            indegree[j]++;
        }
    }
    vector<int> ans;

  for(int i=0;i<v;i++){
      if(indegree[i]==0){
          q.push(i);
      }
    }
    while(!q.empty()){
        int front =q.front();
        q.pop();
    ans.push_back(front);

    for(auto ne:adj[front]){
        indegree[ne]--;
        if(indegree[ne]==0){
             q.push(ne);
        }
    }
    }
return ans;
}
}