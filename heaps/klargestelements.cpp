/*
 vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int> result;
        // code here
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        for(int i=0;i<k;i++){
            minHeap.push(arr[i]);
        }
        for(int i=k;i<n;i++){
            if(arr[i]>minHeap.top()){
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
        while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
         }
       sort(result.begin(),result.end(),greater<int>());
       return result;
    }
*/