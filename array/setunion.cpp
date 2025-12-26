#include <iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
   int m,n;

   cin>>m>>n;
   vector<int>a(m),b(n);
   for(int i=0;i<m;i++){
       cin>>a[i];
   }
   for(int j=0;j<n;j++){
       cin>>b[j];
   }
   set<int>s;
   for(int i=0;i<m;i++){
       s.insert(a[i]);
   }
   for(int j=0;j<n;j++){
       s.insert(b[j]);
   }
   for(int x:s){
      cout<<x<<" ";
   }
    return 0;
}