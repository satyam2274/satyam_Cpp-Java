/*
Take as input S, a string. Write a function that returns true if the string is a palindrome and false otherwise. Print the value returned.
Input Format
String
Constraints
String length between 1 to 1000 characters
Output Format
Boolean
Sample Input
abba
Sample Output
true
Explanation
A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome as it's reverse is "abba", but “abbc” is not palindrome as it's reverse is "cbba".
*/
#include<iostream>
using namespace std;
bool isPlaidrome(string str){

	int l=0;
	int r=str.length()-1;
	while(l<r){
		if(str[l]!=str[r])
			return false;
		l++;
		r--;
	}
	return true;
}
int main() {
	string str;
	getline(cin,str);
	if(isPlaidrome(str)==1)
		cout<<"true";
	else
		cout<<"false";

	return 0;
}