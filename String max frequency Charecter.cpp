/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.
Input Format
String
Constraints
A string of length between 1 to 1000.
Output Format
Character
Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
*/
#include<iostream>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	int arr[256]={0};
	for(int i=0;i<str.length();i++){
		arr[str[i]]+=1;
	}
	int max=0;
	char ch=str[0];
	for(int i=0;i<str.length();i++){
		//cout<<arr[str[i]-'a']<<" ";
		if(arr[str[i]]>max){
			max=arr[str[i]];
			ch=str[i];
			arr[str[i]]=0;
		}
	}
	cout<<ch;
	return 0;
}