/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Input Format
An integer n.

Constraints
None.

Output Format
Single digit integer

Sample Input
38
Sample Output
2
Explanation
The process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
*/
#include<bits/stdc++.h> 
using namespace std;

int adddigit(int n){
 if(n<10){
  return n;
 }

int sum=0;

while(n){

sum=sum+n%10;
 n=n/10; 
 }

return adddigit(sum);
}

int main(){

int n;
cin>>n;
int ans=adddigit(n);
 cout<<ans<<endl;
 return 0;
}
