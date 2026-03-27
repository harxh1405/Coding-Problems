#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size();

        vector<vector<int>>arr;

        for(int i=0;i<n;i++){
            arr.push_back({times[i][0],times[i][1],i});
        }

        sort(arr.begin(),arr.end());
        priority_queue<int,vector<int>,greater<>> avl;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> free;
        for(int i=0;i<n;i++){
            avl.push(i);

            while(!free.empty() && free.top().first<=arr[i][0]){
                avl.push(free.top().second);
                free.pop();
            }
            int chair=avl.top();
            if(targetFriend==arr[i][2]) return chair;
            free.push({arr[i][1],chair});
            avl.pop();
        }

        return -1;
    }
};