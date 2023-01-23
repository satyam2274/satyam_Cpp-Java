/*
Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.

Input Format
Single line input containing a string

Constraints
Length of string <= 10

All characters are unique

Output Format
Display all the words which are in dictionary order smaller than the string entered in a new line each. The output strings must be sorted.

Sample Input
cab
Sample Output
abc
acb
bac
bca
Explanation
The possible permutations of string "cab" are "abc" , "acb" ,"bac" , "bca" , "cab" and "cba" . Only four of them are lexicographically less than "cab". We print them in lexicographical order.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string arr[1000000];
int num=0;
void getper(string str1,string str2 ){
	if(str1.length()==0){
		arr[num++]=str2;
		return;
	}
	for(int i=0;i<str1.length();i++){
		char ch=str1[i];
		string leftpart=str1.substr(0,i);
		string rightpart=str1.substr(i+1,str1.length());
		string sum=leftpart+rightpart;
		getper(sum,str2+ch);
	}
}
int main() {
	string str1;
	cin>>str1;
	getper(str1,"");
	sort(arr,arr+num);
	for(int i=0;i<num;i++){
		if(arr[i]<str1)
			cout<<arr[i]<<endl;
	}
	return 0;
}