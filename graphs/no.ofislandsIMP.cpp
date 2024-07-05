//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    void bfs(int row, int col , vector<vector<int>> &vis,vector<vector<char>> &grid){
        
        vis[row][col]=1;
        
        queue<pair<int,int>> q;
        q.push({row,col});
        
        int n = grid.size();
        int m = grid[0].size();
        
        
        while(!q.empty()){
            // marking rows and columns
            
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            // now traversing to its neighbours which can be only (row+-1 , col+-1)

            // important
            
            for(int delrow = -1;delrow<=1;delrow++){
               for(int delcol = -1;delcol<=1;delcol++){
                
                int newrow = row + delrow;
                int newcol = col + delcol;
                
                if(newrow>=0 && newcol>=0 && newrow<n && newcol<m 
                && !vis[newrow][newcol] && grid[newrow][newcol]=='1'){
                    
                     vis[newrow][newcol]=1;
                     
                     q.push({newrow,newcol});
                }
            }
        }
       } 
        
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        for(int row=0; row<n;row++){
            for(int col=0; col<m;col++){
                
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends