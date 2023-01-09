/*
You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.
Input Format
First line contains number of test cases, T. Next T lines contains integers, n and k.
Constraints
1<=T<=10
1<=N<=10^15
1<=K<=10^4
Output Format
Output the integer x
Sample Input
2
10000 1
1000000000000000 10
Sample Output
10000
31
Explanation
For the first test case, for x=10000, 10000^1=10000=n
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
# define ll long long int

ll search(ll n,ll k,ll l,ll r,ll ans){
	while(l<=r){
		ll mid=(l+r)/2;
		if(pow(mid,k)<=n){
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		if(k==1){
			cout<<n<<endl;
			continue;
		}
		ll ans=search(n,k,0,sqrt(n),-1);
		cout<<ans<<endl;
	}
	return 0;
}