#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=*(min_element(v.begin(),v.end()));
    int max=*(max_element(v.begin(),v.end()));
    // int count=*(count(v.begin(),v.end()));
    cout<<min<<endl;
    cout<<max<<endl;
    // cout<<count<<endl;
    reverse(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}