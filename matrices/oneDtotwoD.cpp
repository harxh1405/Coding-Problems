#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> matrix(m,vector<int>(n,0));
        int dim=original.size();
        if(m*n!=dim) return {};
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=original[k++];
            }
        }
        return matrix;
    }
};