#include <iostream>
using namespace std;
int subseq(string input, string output[]){
	//base case
	if(input.size()==0){
		output[0]="";
		return 1;
	}
	int smallsize=subseq(input.substr(1),output);
	//appending the output array
	for(int i=0; i<smallsize; i++){
		output[i+smallsize]=input[0]+output[i];
	}
	return 2*smallsize;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string input;
	getline(cin,input); //taking string input
	string *output=new string[100];
	int count;
	count=subseq(input,output); //subsequence function returns the count
	for(int i=0; i<count; i++)
		cout<<output[i]<<endl;
	return 0;
}