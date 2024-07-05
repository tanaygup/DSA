/*class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
       vector<int> result;

    // Create a max heap
    priority_queue<pair<pair<int, int>,int>> maxHeap;

    for (int i = 0; i < n; ++i) {
        
        if(arr[i]==x){
            continue;
        }
        int diff = abs(arr[i] - x);
        

        // Insert element and its absolute difference into max heap
        maxHeap.push({{diff, arr[i]},arr[i]});
        
        // If heap size exceeds K, pop the maximum element
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    // Pop elements from max heap and store in result vector
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    // Reverse the result vector to get elements in ascending order
    reverse(result.begin(), result.end());

    return result;
    }
*/
