#include <vector>
using namespace std;
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        long long i=1;
        while(true){
            int sum=i;
            for(int j=0;j<n;j++){
               sum+=nums[j];
               if(sum<1) break;
            }
            if(sum>=1) break;
            i++;
        }
        return i;
    }
};