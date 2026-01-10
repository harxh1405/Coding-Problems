#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_set<int> s;
    unordered_map<int,int> idx; // to store index

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (s.count(need)) {
            return {idx[need], i};
        }
        s.insert(nums[i]);
        idx[nums[i]] = i;
    }
    return {};
}};
