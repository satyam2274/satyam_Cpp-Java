/*
Given an integer N, print Pascal Triangle upto N rows. 

Input Format
Single integer N.

Constraints
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
       1
     1   1
   1   2   1
 1   3   3   1
Explanation
Last row has one " "
*/
#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int c=1;
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			
			cout<<" "<<c;
			c=c*(i-j)/j;
		}
		cout<<endl;
	}
	return 0;
}