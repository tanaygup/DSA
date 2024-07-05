 /*N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
 
 long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long i =0;
        long j =0;
        long sum =0;
        long Maxsum =INT_MIN;
        while(j<N){
         sum = sum + Arr[j];
         if(j-1+1<K){
             j++;}
        else if(j-i+1==K){
            Maxsum = max(Maxsum,sum);
            sum = sum - Arr[i];
            i++;
            j++;
        }
        
        }
        return Maxsum;
    }
    */