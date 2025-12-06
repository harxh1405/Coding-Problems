
//sort in such a way that first element of pair is in increasing order and second element is in decreasing order
#include <iostream>
#include<vector>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
     if(a.first!=b.first){
         if(a.first>b.first) return true;
         return false;
     }
     else{
         if(a.second<b.second) return true;
         return false;
     }
 }
int main()
{
   int n;
   cin>>n;

   vector<pair<int,int>> v (n); //pair vector  
//filling pair vector
   for(int i=0; i<n; i++){
       cin>>v[i].first>>v[i].second;
   }
   //sorting pair vectors
 for(int i=0; i<n; i++){
     for(int j=i+1;j<n;j++) {
         if(comp(v[i],v[j])) swap(v[i],v[j]);
     }
 }
   for(int i=0; i<n;i++){
       cout<<v[i].first<<" "<<v[i].second<<endl;
   }
   
    return 0;
 
}