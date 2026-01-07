#include <vector>
using namespace std;
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // prefix sum
        int n=arr.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        int sum=0;
        //forward cummulative sum
        for(int i=0;i<n;i++){
            prefix[i]=arr[i]+sum;
            sum=prefix[i];
        }
        //backward cummulative sum
        sum=0;
        for(int i=n-1;i>=0;i--){
            suffix[i]=arr[i]+sum;
            sum=suffix[i];
        }
        for(int i=0;i<n-1;i++){
            if(prefix[i]==suffix[i]) return i;
        }
        return -1;
    }
};