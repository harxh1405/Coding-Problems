//avoid using set to eliminate duplicate solutions
//tc for insertion in set is nlogn
//for recursion this would lead to 2^nlog2^n since we have 2^n solutions
//work towards solution that generates only non duplicate permutation
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string>output;
        permutation(s,0,output);
        return output;
    }
  private:
    void permutation(string &s,int i,vector<string>&output){
        if(i==s.size()){
            output.push_back(s);
            return;
        }
        for(int j=i; j<s.size();j++){
            swap(s[i],s[j]);
            permutation(s,i+1,output);
            swap(s[i],s[j]);//backtracking
        }
    }
};
