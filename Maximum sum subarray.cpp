/*
*
Given an array and you need to find out the contiguous subarray that has the largest sum and return the sum of the subarray.
Input Format
A number representing n length of array. N lines representing the n elements of the array. The last line takes A number representing the target sum.
Constraints
The length of the array must be less than 10000
Output Format
Print the sum of the maximum subarray
Sample Input
9
-2
1 
-3 
4 
-1 
2 
1 
-5 
4
Sample Output
6
Explanation
{-2,1,-3,4,-1,2,1,-5,4}
The resultant will be 6.
{4,-1,2,1}is the subarray that has the largest sum = 6.
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int ans = -1000000;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
		ans = max({ans,sum});
		if(sum<0){
			sum = 0;
		}
	}
	cout<<ans<<endl;
	return 0;
}