#include<vector>
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>input(n);
  vector<int>prefix_sum(n);
  for(int i=0;i<n;i++) cin>>input[i];
  int sum=0;
  //creating a prefix array
  for(int i=0;i<n;i++){
  sum+=input[i];
  prefix_sum[i]=sum;
  }
  int q;
  cin>>q;
  while(q--){
  int i,j;
  cin>>i>>j;
  if(i==0) cout<<prefix_sum[j]<<" ";
  else cout<<prefix_sum[j]-prefix_sum[i-1]<<" ";
  }
}