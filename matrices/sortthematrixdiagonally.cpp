#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        unordered_map<int,vector<int>> mp;

        //fill the diagonals in map

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push_back(mat[i][j]);
            }
        }

        //sort the diagonal in map

        for(auto &item:mp){
            sort(item.second.begin(),item.second.end());
        }

        //fill the diagonals

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=mp[i-j].front();//fill the front 
                mp[i-j].erase(mp[i-j].begin());//erase the front
            }
        }
       return mat;
    }
};