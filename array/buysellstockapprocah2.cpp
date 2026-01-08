#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mintillnow=prices[0];
        int maxprofit=0;
        for(int i=1;i<n;i++){
            maxprofit=max(maxprofit, prices[i] - mintillnow);
            mintillnow=min(prices[i],mintillnow);
        }
        return maxprofit;
    }
};