//Remove a particular character from the string using reccursion
#include <iostream>
#include<vector>
using namespace std;
void trim(string &str, char ch, int idx){
    if(idx==str.size()) return;
    if(str[idx]==ch){
        str.erase(idx,1);
        return trim(str,ch,idx);
    }
    return trim(str,ch,idx+1);
}
int main()
{ 
    
    string input;
    getline(cin,input);
    trim(input, 'a',0);
    cout<<input;
    return 0;
}