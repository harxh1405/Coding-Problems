//remove every occurrence of a char by give char/string
#include <iostream>
#include<vector>
using namespace std;
void replace(string &str, string repl, char toReplace,int idx){
    if(idx==str.size()) return;
    if(str[idx]== toReplace){
        str.erase(idx,1);
        str.insert(idx,repl);
        return replace(str,repl,toReplace,idx+repl.size());
    }
    return replace(str,repl,toReplace,idx+1);
}
int main()
{ 
    
    string input;
    getline(cin,input);
    string repl;
    getline(cin,repl);
    
    replace(input,repl,'a',0);
    cout<<input;
    return 0;
}