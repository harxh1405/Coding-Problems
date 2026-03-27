#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m=tasks.size();
        vector<int>mp(26,0);
        for(auto c:tasks){
            mp[c-'A']++;
        }
        int mostFreq=*max_element(mp.begin(),mp.end());
        int maxCount=count(mp.begin(),mp.end(),mostFreq);

        return max(m,(mostFreq-1)*(n+1)+maxCount);
    }
};