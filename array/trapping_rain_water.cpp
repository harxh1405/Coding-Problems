#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        //pre computation technique
        int n=height.size();
        int sum=0;
        vector<int>left(n);
        vector<int>right(n);
        left[0]=height[0];
        right[n-1]=height[n-1];
        //precompute left
        for(int i=1;i<n;i++){
            left[i]=max(height[i],left[i-1]);
        }
        //precompute right
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        for(int i=1;i<n-1;i++){
          sum+=min(left[i],right[i])-height[i];
        }
        return sum;
    }
};