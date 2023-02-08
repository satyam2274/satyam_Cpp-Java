/*
Given a long vector of strings, print the strings that contain the strings generated by numeric string str.

vector<string> keypad = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string searchIn [] = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
For example, if the input is 26 and the string is coding, then output should be coding since 26 can produce co which is contained in coding.

Input Format
A numeric string str

Constraints
len(str) < 10
No of strings in the vector < 10

Output Format
Each matched string from the given vector.

Sample Input
34
Sample Output
vidhi
divyam
sneha
Explanation
34 will result into combinations :

*dg         *eg         *fg
*dh            *eh         *fh
*di            *ei         *fi
Corresponding strings are output.

vidhi contains dh
divyam contains di
sneha contains eh
*/
include<iostream>
#include <string>
using namespace std;
string table[]={" ",".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

void generate(char *inp,char *out, int i, int j){
	if(inp[i]=='\0'){
		out[j]='\0';
		for(int k=0;k<11;k++){
			size_t found = searchIn[k].find(out);
			if(found!=string::npos)
			cout<<searchIn[k]<<endl;
		}
		return;
	}
	int key = inp[i]-'0';
	if(key==0)
	generate(inp,out,i+1,j);
	for(int m=0;table[key][m]!='\0';m++){
		out[j]=table[key][m];
		generate(inp,out,i+1,j+1);
	}
	return;
}

int main() {
	char a[100000],out[100000];
	cin>>a;
	generate(a,out,0,0);
	return 0;
}
