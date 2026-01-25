#include <vector>
using namespace std;
class Solution {

public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> out;
        int a=0,b=n-1;
        while(a!=b){
            while(b!=n-1 && numbers[b+1]==numbers[b]) b--;
            while(a!=0 && numbers[a-1]==numbers[a]) a++;
            int sum=numbers[a]+numbers[b];
            if(sum==target){
                out.push_back(a+1);
                out.push_back(b+1);
                break;
            }
            else if(sum>target) b--;
            else a++;
        }
        return out;
    }
};