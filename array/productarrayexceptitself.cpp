#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0);
        vector<int>post(n,0);
        vector<int>output(n);
        int prod=1;
        //calculate pre array
        for(int i=0;i<n;i++){
          pre[i]=nums[i]*prod;
          prod=pre[i];
        }
        //calculate post array
        prod=1;
        for(int i=n-1;i>=0;i--){
            post[i]=nums[i]*prod;
            prod=post[i];
        }
        output[0]=post[1],output[n-1]=pre[n-2];
        for(int i=1;i<n-1;i++){
            output[i]=pre[i-1]*post[i+1];
        }
        return output;

    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);

        int leftProduct=1;

        for(int i=0;i<n;i++){
            ans[i]=leftProduct;
            leftProduct*=nums[i];
        }

        int rightProduct=1;

        for(int i=n-1;i>=0;i--){
            ans[i]*=rightProduct;
            rightProduct*=nums[i];
        }
        
     return ans;
    }
};