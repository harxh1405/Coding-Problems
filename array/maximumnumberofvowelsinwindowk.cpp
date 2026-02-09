#include<string>
using namespace std;
class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        //set the window first
        int maxCount=0,count=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])) count++;
        }
        maxCount=max(maxCount,count);
        //slide the window
        for(int i=1;i<n-k+1;i++){
            if(isVowel(s[i-1])) count--;
            if(isVowel(s[i+k-1])) count++;
            maxCount=max(maxCount,count);
        }

        return maxCount;
    }
};