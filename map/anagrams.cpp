/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
           
        unordered_map<string,vector<string>> mp;
        for(auto a: strs){
            string temp = a;
            sort(a.begin(),a.end());
            mp[a].push_back(temp);
        }
        for(auto a: mp){
            ans.push_back(a.second);
        }
        
       
        return ans;
    }
};
*/