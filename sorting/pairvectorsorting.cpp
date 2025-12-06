#include <iostream>
#include<vector>
 using namespace std;
int main()
{
   int n;
   cin>>n;

   vector<pair<int,int>> v (n); //pair vector  

   for(int i=0; i<n; i++){
       cin>>v[i].first>>v[i].second;
   }
//   sort(v.begin(),v.end());
 //even pair vectors can be selection sorted
 for(int i=0; i<n; i++){
     for(int j=i+1;j<n;j++) {
         if(v[i]>v[j]) swap(v[i],v[j]);
     }
 }
   for(int i=0; i<n;i++){
       cout<<v[i].first<<" "<<v[i].second<<endl;
   }
   
    return 0;
}