#include <vector>
using namespace std;
class Solution {
public:
    vector<int> leftShift(vector<int>&row,int k){
        int n=row.size();
        k=k%n;
        vector<int>shifted(n);

        for(int i=0;i<n;i++){
            shifted[(i-k+n)%n]=row[i];
        }
        return shifted;
    }
    vector<int>rightShift(vector<int>&row,int k){
        int n=row.size();
        k=k%n;
        vector<int>shifted(n);

        for(int i=0;i<n;i++){
            shifted[(i+k)%n]=row[i];
        }
        return shifted;
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int r=mat.size();
        vector<vector<int>>copy=mat;
        
        for(int i=0;i<r;i++){
            if(i%2==0) mat[i]=leftShift(mat[i],k);
            else mat[i]=rightShift(mat[i],k);
        }
        return mat==copy;
    }
};