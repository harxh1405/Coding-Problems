#include<vector>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0;
        long long sum=0;
        //set the window
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum/k>=threshold) count++;

        //slide the window
        for(int i=1;i<n-k+1;i++){
            sum+=(arr[i+k-1]-arr[i-1]);
            if(sum/k>=threshold) count++;
        }

        return count;
    }
};