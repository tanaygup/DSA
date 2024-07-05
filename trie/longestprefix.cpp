/* ALGO
1. take first string and compare its char with remaining strings one by one
2. if char matches then add this char and continue
3. if not matches then stop 

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans = "";
    
    for(int i=0;i<arr[0].length();++i){
        char ch = arr[0][i];
        bool matches=true;
        for(int j=1;j<n;++j){
            
            //not match
            if(arr[j].size()<i || ch!=arr[j][i]){
               matches = false;
                break;
            }
           
        }
        if(matches==false) break;
        else{
                ans.push_back(ch);
           }
    }
    return ans;
}*/