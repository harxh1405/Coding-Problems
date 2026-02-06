#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>out(m,vector<int>(n,0));
        vector<int>colmax(n,INT_MIN);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               colmax[j]=max(colmax[j],matrix[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-1) out[i][j]=colmax[j];
                else out[i][j]=matrix[i][j];
            }
        }

        return out;

    }
};