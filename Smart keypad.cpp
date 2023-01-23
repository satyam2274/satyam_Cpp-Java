
You will be given a numeric string S. Print all the possible codes for S.

Following vector contains the codes corresponding to the digits mapped.

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

/*
For example, string corresponding to 0 is " " and 1 is ".+@$"

Input Format
A single string containing numbers only.

Constraints
length of string <= 10

Output Format
All possible codes one per line in the following order.

The letter that appears first in the code should come first

Sample Input
12
Sample Output
.a
.b
.c
+a
+b
+c
@a
@b
@c
$a
$b
$c
Explanation
For code 1 the corresponding string is .+@$ and abc corresponds to code 2.
*/
#include<iostream>
using namespace std;
int count=0;
string codes[]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void getkpc(string str,string asf){
	if(str.length()==0){
		count++;
		cout<<asf<<" "<<endl;
		return ;
	}
	char ch=str[0];
	string code=codes[ch-'0'];
	string ros=str.substr(1);
	for(int i=0;i<code.length();i++){
		getkpc(ros,asf+code[i]);
	}
}
int main() {
	string n;
	cin>>n;
	getkpc(n,"");
	cout<<endl;
	//cout<<count;
	return 0;
}