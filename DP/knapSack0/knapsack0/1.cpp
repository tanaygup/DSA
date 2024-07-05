/*
#include <bits/stdc++.h>
int solve(vector<int> &weight, vector<int> &value, int ind, int W) {

  // base case (index starting from last)
  if (ind == 0) {
    if (weight[0] <= W)
      return value[0];
    else
      return 0;
  }
  int inc = 0;
  if (weight[ind] <= W)
    inc = value[ind] + solve(weight, value, ind - 1, W - weight[ind]);

  int exc = 0 + solve(weight, value, ind - 1, W);

  int ans = max(inc, exc);
  return ans;
}
int solvemem(vector<int> &weight, vector<int> &value, int ind, int W,
             vector<vector<int>> &dp) {
  if (ind == 0) {
    if (weight[0] <= W)
      return value[0];
    else
      return 0;
  }
  if (dp[ind][W] != -1)
    return dp[ind][W];
  int inc = 0;
  if (weight[ind] <= W)
    inc = value[ind] + solvemem(weight, value, ind - 1, W - weight[ind], dp);

  int exc = 0 + solvemem(weight, value, ind - 1, W, dp);

  dp[ind][W] = max(inc, exc);
  return dp[ind][W];
}
int solvetab(vector<int> &weight, vector<int> &value, int n, int W) {
  vector<vector<int>> dp(n, vector<int>(W + 1, 0));

  // base case
  for (int i = weight[0]; i <= W; ++i) {
    if (weight[0] <= W)
      dp[0][i] = value[0];
    else
      dp[0][i] = 0;
  }

for (int i = 1; i < n; ++i) {
  for (int w = 0; w <= W; ++w) {
    int inc = 0;
    if (weight[i] <= w)
      inc = value[i] + dp[ i- 1][ w - weight[i]];

    int exc = 0 + dp[ i - 1][ w];

    dp[i][w] = max(inc, exc);
  }
}
return dp[n-1][W];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
  // Write your code here
  // return solve(weight,value,n-1,maxWeight);
 /* vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
  return solvemem(weight, value, n - 1, maxWeight, dp);
return solvetab(weight,value,n,maxWeight);
}
*/
