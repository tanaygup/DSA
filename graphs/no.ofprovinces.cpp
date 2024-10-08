//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  private:
      void dfs(int node,vector<vector<int>> &adj,vector<bool> &vis){
          vis[node]=true;
          
          for(int i=0;i<adj.size();i++){
              
              if(i!=node && adj[node][i]==1){
                  if(!vis[i]){
                  dfs(i,adj,vis);
              }
          }
          }
          
      }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        
        // changing matrix to list
       
        
       vector<bool> vis(V,false);
      
        int cnt=0;
       
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                cnt++;
                dfs(i,adj,vis);
                
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends