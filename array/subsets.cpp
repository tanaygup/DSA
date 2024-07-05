/*
class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int> a,int i) {
        //  base case
        if(i>=nums.size()){
            ans.push_back(a);
            return;
        } 
        // exclude
        solve(nums,ans,a,i+1);

        // include
        int element = nums[i];
        a.push_back(element);
        solve(nums,ans,a,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        int i = 0;
        solve(nums, ans, a, i);
        return ans;
    }
};
*/