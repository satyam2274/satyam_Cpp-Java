
/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
Input Format
Constraints
0 < N <= 1000000000
Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int p=1;
	int sum=0;
	while(n>0){
		int temp=n%10;
		n=n/10;
		sum+=temp*p;
		p=p*2;
	}
	cout<<sum;


	return 0;
}