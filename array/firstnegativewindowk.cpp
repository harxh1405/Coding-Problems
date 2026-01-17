#include<vector>
#include<deque>
using namespace std;
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        deque<int> dq;
        vector<int> out;

        // First window
        for(int i = 0; i < k; i++){
            if(arr[i] < 0){
                dq.push_back(i);
            }
        }
        if(dq.empty()) out.push_back(0);
        else out.push_back(arr[dq.front()]);

        // Sliding window
        for(int i = k; i < n; i++){
            int rem_in = i - k;

            // Remove out-of-window elements
            if(!dq.empty() && dq.front() == rem_in)
                dq.pop_front();

            // Add new element
            if(arr[i] < 0)
                dq.push_back(i);

            // Store answer
            if(dq.empty()) out.push_back(0);
            else out.push_back(arr[dq.front()]);
        }
        return out;
    }
};
