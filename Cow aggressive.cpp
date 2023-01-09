
    /*
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).
His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Input Format
First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.
Constraints
2 <= N <= 100,000
0 <= xi <= 1,000,000,000
2 <= C <= N
Output Format
Print one integer: the largest minimum distance.
Sample Input
5 3
1 2 8 4 9
Sample Output
3
Explanation
Problem Credits - (Spoj)[http://www.spoj.com/problems/AGGRCOW/]
*/
#include<iostream>
#include <bits/stdc++.h>

using namespace std;
	bool isValid(int *stall,int n,int tc,int mid){
		int cp=1;
		int prev=stall[0];
		for(int i=1;i<n;i++){
			if(stall[i]-prev>=mid){
				cp++;
				prev=stall[i];
				if(cp==tc)
				return true;
			}
			
		}
		return false;
	}
    int main() {
		int n;
		int tc;
		cin>>n>>tc;
		int stall[n];
		for(int i=0;i<n;i++)
			cin>>stall[i];
		sort(stall,stall+n);

		int l=0;
		int r=stall[n-1];
		int ans=-1;
		while(l<=r){
			int mid=(l+r)/2;
			if(isValid(stall,n,tc,mid)){
				ans=mid;
				l=mid+1;
			}
			else
				r=mid-1;

		}
		cout<<ans;

	return 0;
}