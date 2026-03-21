#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int n=s.size();
        unordered_map<string,int> freq;
        unordered_map<char,int>charCount;
        int maxCount=0;
        //set the window
        for(int i=0;i<minSize;i++){
            charCount[s[i]]++;
        }
        if(charCount.size()<=maxLetters){
            string sub=s.substr(0,minSize);
            freq[sub]++;
            maxCount=max(maxCount,freq[sub]);
        }
        //move the window
        for(int i=1;i<n-minSize+1;i++){
           charCount[s[i-1]]--;
           if (charCount[s[i - 1]] == 0) {
                charCount.erase(s[i - 1]);  
            }
           charCount[s[i+minSize-1]]++;
           if(charCount.size()<=maxLetters){
            string sub=s.substr(i,minSize);
            freq[sub]++;
            maxCount=max(maxCount,freq[sub]);
           }
        }

        return maxCount;
    }
};