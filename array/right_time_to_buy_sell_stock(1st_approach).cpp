#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>right(n);
        //right precompute
        right[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(prices[i],right[i+1]);
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            int diff=right[i]-prices[i];
            if(diff>max)
            max=diff;
        }
        return max;
    }
};
//not optimal approach as it uses extra space