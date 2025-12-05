//remove every occurrence of a char by give char/string
#include <iostream>
#include<vector>

using namespace std;
void replace(string &input, char toReplace, string replaceBy,int i){
    if(i==input.size()) return;
    if(input[i] == toReplace){
        input.erase(i,1);
        input.insert(i,replaceBy);
        replace(input,toReplace,replaceBy,i+replaceBy.size());
    }
    replace(input,toReplace,replaceBy,i+1);
}
int main()
{ 
    string input, replaceBy;
    char toReplace;
    cin>>input>>replaceBy;
    cin>>toReplace;
    replace(input,toReplace,replaceBy, 0);
    cout<<input;
    return 0;
}