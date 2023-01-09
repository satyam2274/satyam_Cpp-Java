/*
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
Input Format
Constraints
0 < N <= 1000000000
Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int res=0,p=1;
	while(n>0){
		int temp=n%8;
		n=n/8;
		res=res+temp*p;
		p=p*10;
	}
	cout<<res;
	return 0;
}