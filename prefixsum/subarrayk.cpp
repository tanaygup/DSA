/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
Example 1:

Input: nums = [1,1,1], k = 2
Output: 2

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count = 0;
        int prefix = 0;
        mp[0]=1;

        for(int i=0;i<nums.size();++i){
            prefix += nums[i];
            int remove = prefix - k;
            count += mp[remove];
            mp[prefix] +=1;
            
        }
        return count;
    }
};
*/